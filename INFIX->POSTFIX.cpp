#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *next;
    char data;
}*head,*last;
int count()
{
    struct node *p;
    p=head;
    int l=0;
    while(p!=NULL)
    {
        l++;
        p=p->next;
    }
    return l;
}
void push(char x)
{
    if(count()==0)
    {
        head=new struct node ;
        head->data =x;
        last=head;
        head->next=NULL;
    }
    else
    {
        struct node *p,*q;
        p=new struct node;
        p->data=x;
        last->next=p;
        p->next=NULL;
        last=p;
    }
    
}
void pop()
{
    if(count()==1)
    {
        head=NULL;
        delete head;
    }
    else
    {
    struct node *p,*q;
    p=head;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    q->next=NULL;
    delete p;
    p=q;
    }
}
char ret()
{
    if(count()>0)
    {
    struct node *p,*q;
    p=head;
    while(p!=NULL)
    {
        q=p;
        p=p->next;
    }
    return q->data;
    }
    else if(count()==1)
    {
        return head->data;
    }
    else
    {
        return 0;
    }
    
    
}
int pre(char x)
{
    if(x=='+' || x=='-')
    {
        return 1;
    }
    else if(x=='/'||x=='*')
    {
        return 2;
    }
    else return 0;
}
int chara(char q)
{
    if(q=='+'|| q=='-'|| q=='/'|| q=='*' )
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
char * postfix(char *a)
{
    struct node st;
    int n = strlen(a);
    char * s=new char[n];
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(chara(a[i]))
        {
            if(count()==0)
            {
                push(a[i]);
            }

           else if(pre(a[i])>pre(ret()))
                {
                    push(a[i]);
                }
            else
            {
                s[l]=ret();
                pop();
                push(a[i]);
                l++;
            }
        }
        else
        {
            s[l]=a[i];
            l++;
        }
    }
    if(count()>0)
    {
        int k =count();
        for(int i=0;i<k;i++)
        {
            s[l]=ret();
            l++;
            pop();
        }
    }
return s;
}
int main()
{
    int n;
    char *a;
    cin>>n;
    a=new char[n];
    cin>>a;
    cout<<postfix(a);
}
