#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    struct Node* next;
};

class CircularLinkList
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
        t-> next = h;
    }

    void Insert()
    {
        int a;
        cout << "Enter a value to insert" <<endl;
        cin >> a;
        p = new Node();
        p->data = a;
        p->next = h->next;
        h->next = p;

        Node* r=h;
            if(h==NULL)
            {
                cout << "List is empty" << endl;
            }
        cout <<"The list is" << endl;
        while(r!=t)
        {
            cout << r-> data << " ";
            r=r->next;
        }
        cout << t->data;
    }

    void Delete()
    {
    int a, b;
    cout << "Enter the value for delete" << endl;
    cin >> b;
    Node *p = h;
    Node *prev = NULL;
    if (p == NULL)
    {
      cout << "Not Found";
    }
    while (p != NULL)
    {
      if (p->data == b)
      {
        if (p == h)
        {
          h = p->next;
          break;
        }
        else
        {
          prev->next = p->next;
          break;
        }
      }
      else
      {
        prev = p;
        p = p->next;
      }
     }
    }


    void Update()
    {
        int a,b;
        cout << "Enter node value ";
        cin >>a;
        cout << "Enter update value ";
        cin >> b;

        Node* p;
        p=h;
        t=t;
        while(p!=t)
        {
            if(p->data==a)
            {
                p->data = b;
            }
            p=p->next;
        }


    }

    void Display()
    {
            Node* r=h;
            if(h==NULL)
            {
                cout << "List is empty" << endl;
            }
        cout <<"The list is" << endl;
        while(r!=t)
        {
            cout << r-> data << " ";
            r=r->next;
        }
        cout << t->data;
    }
};

int main()
{
    CircularLinkList test;
    int m;
    cout << "********* Menu ********" << endl << "1. Create" << endl << "2. Insert" << endl << "3. Delete" << endl << "4. Update" << endl << "5. Display" << endl << "6. Exit" << endl << "Enter your option[1-6]: " << endl;
     cin >> m;
    if(m==1)
    {
        test.Create();
        test.Display();
    }

    else if(m==2)
    {
        test.Create();
        test.Insert();
    }

    else if(m==3)
    {
        test.Create();
        test.Delete();
        test.Display();
    }

     else if(m==4)
    {
        test.Create();
        test.Update();
        test.Display();
    }
    else if(m==5)
    {
        test.Create();
        test.Display();
    }

    else if(m==6)
    {
        cout << "Thank you!!" << endl;
    }

    else
    {
        cout << "Wrong input" << endl;
    }
}

