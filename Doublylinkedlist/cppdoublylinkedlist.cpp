#include<iostream>
using namespace std;

class Node
{
    public:
        Node *prev;
        int data;
        Node *next;
};

class Doublylinkedlist
{
    private:
        Node *head;
    public:
        Doublylinkedlist();
        Doublylinkedlist(int A[],int n);
        ~Doublylinkedlist();
        void display();
        int length();
        void insert(int index,int x);
        int Delete(int index);
        void reverse();
};

Doublylinkedlist::Doublylinkedlist()
{
    head=new Node;
    head->prev=nullptr;
    head->data=0;
    head->next=nullptr;
}

Doublylinkedlist::Doublylinkedlist(int A[],int n)
{
    head=new Node;
    head->prev=nullptr;
    head->data=A[0];
    head->next=nullptr;
    Node *tail=head;

    for(int i=1;i<n;i++)
    {
        Node *t=new Node;
        t->prev=tail;
        t->data=A[i];
        t->next=tail->next;
        tail->next=t;
        tail=t;
    }
}

void Doublylinkedlist::display()
{
    Node *p=head;
    while(p)
    {
        cout<<p->data<<flush;
        p=p->next;
        if(p)
            cout<<"<->"<<flush;
    }
    cout<<endl;
}

int Doublylinkedlist::length()
{
    Node *p=head;
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}

void Doublylinkedlist::insert(int index,int x)
{
    if(index<0 || index>length())
        return;
    Node *p=head;
    Node *t=new Node;
    t->data=x;

    if(index==0)
    {
        t->prev=nullptr;
        t->next=head;
        head->prev=t;
        head=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
            p=p->next;
        t->prev=p;
        t->next=p->next;
        if(p->next)
            p->next->prev=t;
        p->next=t;
    }
}

int Doublylinkedlist::Delete(int index)
{
    int x=-1;
    Node *p=head;
    if(index<0 || index>length())
        return x;
    if(index==1)
    {
        head=head->next;
        if(head)
            head->prev=nullptr;
        x=p->data;
        delete p;
    }
    else
    {
        for(int i=0;i<index-1;i++)
            p=p->next;
        p->prev->next=p->next;
        if(p->next)
            p->next->prev=p->prev;
        x=p->data;
        delete p;
    }
    return x;
}

void Doublylinkedlist::reverse()
{
    Node *p=head;
    Node *temp;

    while(p)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;

        if(p->next==nullptr)
        {
            p->next=p->prev;
            p->prev=nullptr;
            head=p;
            break;
        }
    }
}

Doublylinkedlist::~Doublylinkedlist()
{
    Node *p=head;
    while(head)
    {
        head=head->next;
        delete p;
        p=head;
    }
}

int main()
{
    int A[]={1,3,5,7,9};
    Doublylinkedlist dll(A,sizeof(A)/sizeof(A[0]));
    //cout<<"Length:"<<dll.length()<<endl;
    //dll.insert(0,11);
    //dll.Delete(1);
    dll.reverse();
    dll.display();
    return 0;
}