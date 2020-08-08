#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
struct node 
{
    char data;
    struct node *next;
}*head;
int count()
{
    int l=0;
    struct node * p;
    p=head;
    while(p!=NULL)
    {
        l++;
        p=p->next;
    }
return l;
}
void push(char d)
{
    if(count()==0)
    {
        head=new struct node;
        head->data=d;
        head->next=NULL;
    }
    else
    {
        struct node *p,*q;
        p= new struct node;
        p->data=d;
        q=head;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
        p->next=NULL;
    }
}
void pop()
{
    struct node *p,*q;
    p=head;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    if(count()==1)
    {
        delete head;
        head=NULL;
    }
    else
    {
    q->next=NULL;
    delete p;
    }
}
char check()
{
    if(count()>0)
    {
    struct node *p;
    p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    return p->data;
    }
    else
    {
        return 0;
    }
    
}
void del()  
{  
struct node *p=head,*q;    
while (p != NULL)  
{  
    q= p->next;  
    delete p;  
    p = q;  
}  
head= NULL;  
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        struct node no;
        char a[1000];
        cin>>a;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='{' || a[i]=='(' || a[i]=='[')
            {
                push(a[i]);
            }
            else if(int(check())+2==int(a[i]))
            {   
                    pop();
            }
            else if( int(check())+1==int(a[i]))
            {
                pop();
            }
            else
            {
                push(a[i]);
            }
            
        }
        if(count()==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    del();
    }

    return 0;
}
