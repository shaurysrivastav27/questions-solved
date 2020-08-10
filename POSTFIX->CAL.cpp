#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node *next;
    int data;
}*head;
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
void push(int x)
{
    if(count()==0)
    {
        head=new struct node ;
        head->data =x;
        head->next=NULL;
    }
    else
    {
        struct node *p,*q;
        p=new struct node;
        p->data=x;
        q=head;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
        p->next=NULL;
    }
    
}
int pop()
{
    int r ;
    if(count()==1)
    {
        r = head->data;
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
    r = p->data;
    delete p;
    p=q;
    }
    return r;
}
int chara(char q)
{
    if(q=='+'|| q=='-'|| q=='/'|| q=='*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int postfix(char *a)
{
    struct node st;
    int r;
    int x1,x2;
    for(int i=0;a[i]!='\0';i++)
    {
        if(!chara(a[i]))
        {
            int k = int(a[i])-int('0');
            push(k);
            //cout<<a[i]<<endl;
        }
        else
        {
            x2=int(pop());
            x1=int(pop());
            //cout<<x1<<" "<<x2<<endl;
            switch (a[i])
            {
            case '+':
                r = x1+x2;
                push(r);
                cout<<"+"<<" "<<r<<endl;
                break;
            case '-':
                r = x1-x2;
                push(r);
                cout<<"-"<<" "<<r<<endl;
                break;
            case '/':
                r = x1/x2;
                push(r);
                cout<<"/"<<" "<<r<<endl;
                break;
            case '*':
                r = x1*x2;
                push(r);
                cout<<"*"<<" "<<r<<endl;
                break;
            }
        }
        
    }
    
return pop();
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
