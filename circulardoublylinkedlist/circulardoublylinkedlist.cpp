#include<iostream>
using namespace std;

class Node
{
    public:
        Node *prev;
        int data;
        Node *next;
};

class circulardoublylinkedlist
{
    private:
        Node *head;
    public:
        circulardoublylinkedlist();
        circulardoublylinkedlist(int A[],int n);
        ~circulardoublylinkedlist();
        void display();
        int length();
        void insert(int index,int x);
        int Delete(int index);
        void Reverse();
};

circulardoublylinkedlist::circulardoublylinkedlist()
{
    head=new Node;
    head->prev=head;
    head->data=0;
    head->next=head;
}

circulardoublylinkedlist::circulardoublylinkedlist(int A[],int n)
{
    head=new Node;
    head->prev=head;
    head->data=A[0];
    head->next=head;
    Node *tail=head;
    
    for(int i=1;i<n;i++)
    {
        Node *t=new Node;
        t->prev=tail;
        tail->next=t;
        t->next=tail->next;
        t->data=A[i];
        tail->prev=t;
        tail=t;
    }
}

void circulardoublylinkedlist::display()
{
    Node *p=head;
    do
    {
        /* code */
        cout<<p->data<<" ";
        p=p->next;
    } while (p!=head);
    cout<<endl;
}

int circulardoublylinkedlist::length()
{
    int len=0;
    Node *p=head;
    do
    {
        /* code */
        len++;
        p=p->next;
    } while (p!=head);
    return len;
}

void circulardoublylinkedlist::insert(int index,int x)
{
    if(index<0 || index>length())
        return;
    Node *p=head;
    Node *t=new Node;
    t->data=x;

    if(index==0)
    {
        if(head==NULL)
        {
            head=t;
            head->prev=head;
            head->next=head;
        }
        else
        {
            while(p->next!=head)
                p=p->next;
            p->next=t;;
            head->prev=t;
            t->prev=p;
            t->next=head;
            head=t;
        }
    }
    else
    {
        for(int i=0;i<index-1;i++)
            p=p->next;
        t->next=p->next;
        p->next->prev=t;
        p->next=t;
        t->prev=p;
    }
}

int circulardoublylinkedlist::Delete(int index)
{
    int x=-1;
    Node *p=head;
    if(index<0 || index>length())
        return x;
    if(index==1)
    {
        while(p->next!=head)
            p=p->next;
        x=head->data;
        if(head==p)
        {
            delete head;
            head=NULL;
        }
        else
        {
            p->next=head->next;
            head->next->prev=p->next;
            head=p->next;
        }    
    }
    else
    {
        for(int i=0;i<index-1;i++)
            p=p->next;
        p->next->prev=p->prev;
        p->prev->next=p->next;
        x=p->data;
        delete p;
    }
    return x;
}

circulardoublylinkedlist::~circulardoublylinkedlist()
{
    Node *p=head;
    do
    {
        /* code */
        head=head->next;
        delete p;
        p=head;
    } while (p!=head);
    
}

int main()
{
    cout<<"hioi";
    int A[]={1,2,3,4,5};
    circulardoublylinkedlist dll(A,sizeof(A)/sizeof(A[0]));
    cout<<"Length=:"<<dll.length()<<endl;
    dll.display();
    return 0;
}