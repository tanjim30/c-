#include<iostream>
using namespace std;

class PushPop
{
private:
    int n;
    int arra[1000];

public:
    void Create()
    {
        int i;
        cout << "Enter how many elements" <<endl;
        cin >> n;
        cout << "Enter elements" <<endl;
        for(i=0;i<n;i++)
        {
            cin >> arra[i];
        }
    }

    void Push()
    {
        int a,top,i;
        cout << "Enter value to push" <<endl;
        cin >> a;
        top = n;
        if(top >= 1000)
        {
            cout << "Stack full"<<endl;
        }
        else
        {
            arra[top]=a;
        }
        cout << "After push" << endl;
        for(i=0;i<=top;i++)
        {
            cout << arra[i];
        }
    }

    void Pop()
    {
        int a,top,i;
        top = n-1;
        if(top<0)
        {
            cout << "Stack empty"<<endl;
        }
        else
        {
            top = top-1;
        }

        cout <<endl <<"After pop" << endl;
        for(i=0;i<=top;i++)
        {
            cout << arra[i] << " ";
        }
    }

    void Display()
    {
        int i;
         cout << "Stack....." << endl;
        for(i=0;i<n;i++)
        {
            cout << arra[i] << endl;
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
    }
    else if(n==2)
    {
        test.Create();
        test.Pop();
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
