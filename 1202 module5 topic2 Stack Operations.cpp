#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    struct Node* next;
};

class PushPop
{
private:
    Node* h;
    Node* p;
    Node* t;

public:
    void Create()
    {
        int n;
        cout << "Enter how many nodes " << endl;
        cin >> n;
        int i,x;

        h=NULL;
        t=NULL;
        cout << "Enter value" << endl;
        for(i=0;i<n;i++)
        {
            p = new Node();
            cin >> x;
            p->data = x;
            if (h==NULL)
            {
                h=p;
            }
            if(t==NULL)
            {
                t = p;
            }
            else
            {
             t->next = p;
             t=p;
            }
        }
        t-> next = NULL;
    }

    void Push()
    {
        int a;
        cout << "Enter new element " << endl;
        cin >> a;
        p = new Node();
        p->data = a;
        t->next = p;
        t=p;
        t->next = NULL;
    }

    void Pop()
    {
        Node*p;
        p=h;
        while (p->next != t)
        {
            p=p->next;
        }

        if(p->next == t)
        {
            t=p;
        }
        t->next=NULL;
    }

    void Display()
    {
        Node* r=h;
        if(h==NULL)
            {
                cout << "List is empty" << endl;
            }
        cout <<"The list is" << endl;
        while(r!=NULL)
        {
            cout << r-> data << " ";
            r=r->next;
        }
    }
};

int main()
{
    PushPop test;
    int n;
    cout << "Menu" << endl << "1.Push" << endl << "2.Pop" << endl << "3.Display" << endl << "4.Exit" << endl;
    cin >> n;
    if(n==1)
    {
        test.Create();
        test.Push();
        test.Display();
    }
    else if(n==2)
    {
        test.Create();
        test.Pop();
        test.Display();
    }
    else if(n==3)
    {
        test.Create();
        test.Display();
    }
    else if(n==4)
    {
        cout << "Thank you"<<endl;
    }
    else
    {
        cout << "Wrong input"<<endl;
    }
}

