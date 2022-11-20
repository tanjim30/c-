#include<iostream>
using namespace std;

class BinarySearch
{
private:
    int Beg,End,Mid,flag=0;

public:
    void Search(int ax[], int n, int x)
    {
        Beg=0;
        End = n;

        while(Beg <= End)
        {
            Mid =Beg + (End-Beg)/2;
            if(ax[Mid] == x)
            {
                cout << Mid+1;
                flag=1;
                break;
            }
            if(ax[Mid] > x)
            {
                End = Mid - 1;
            }
            if(ax[Mid] < x)
            {
              Beg = Mid + 1;
            }
        }
        if(flag==0)
        {
            cout << "Not found!!";
        }
    }
};

int main()
{
    int n,i,x;

    cout << "Enter how many elements" << endl;
    cin >> n;
    int ax[n];
    cout << "Enter array values in a shorted manner" << endl;
    for(i=0;i<n;i++)
    {
        cin >> ax[i];
    }
    cout << "Enter value for search" << endl;
    cin >> x;

    BinarySearch t;
    t.Search(ax,n,x);
    return 0;
}

