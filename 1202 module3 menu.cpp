#include<iostream>
using namespace std;

class Menu
{
private:
    int arra[100];
    int n,i,a=5,x,flag=0,Beg,End,Mid;

public:
    void Create()
    {
        cout << "Enter How many elements" << endl;
        cin >> n;
        cout << "Enter elements" << endl;
        for(i=0;i<n;i++)
        {
            cin >> arra[i];
        }
    }

    void LinerSearch()
    {
        cout << "Enter value to search" << endl;
        cin >> x;
        for(i=1;i<=n;i++)
        {
            if(arra[i] == x)
            {
                cout << "Found at Index " << i+1 << endl;
                a=2;
            }
        }
        if(a==5)
        {
            cout << "Not Found";
        }
    }

    void BinarySearch()
    {
        cout << "Enter value to search" << endl;
        cin >> x;

        Beg=0;
        End = n;

        while(Beg <= End)
        {
            Mid =Beg + (End-Beg)/2;
            if(arra[Mid] == x)
            {
                cout << "Found at index " << Mid+1;
                flag=1;
                break;
            }
            if(arra[Mid] > x)
            {
                End = Mid - 1;
            }
            if(arra[Mid] < x)
            {
              Beg = Mid + 1;
            }
        }
        if(flag==0)
        {
            cout << "Not found!!";
        }
    }

    void Display()
    {
        cout << "Displaying....  " << endl;
        for(i=0;i<n;i++)
        {
            cout << arra[i] << endl ;
        }
    }


};

int main()
{
    Menu test;
    int m;
    cout << "********* Menu ********" << endl;
    cout << "1. Create " << endl;
    cout << "2. Linear Search " << endl;
    cout << "3. Binary Search" << endl;
    cout << "4. Display " << endl;
    cout << "5. Exit " << endl;
    cout << "Enter any key " << endl;


    cin >> m;
    if(m==1)
    {
        test.Create();
    }

    else if(m==2)
    {
        test.Create();
        test.LinerSearch();
    }

    else if(m==3)
    {
        test.Create();
        test.BinarySearch();
    }

    else if(m==4)
    {
        test.Create();
        test.Display();
    }
    else if(m==5)
    {
        cout << "Thank you!!" << endl;
    }

    else
    {
        cout << "Wrong input" << endl;
    }
}
