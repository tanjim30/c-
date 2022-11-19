#include<iostream>
using namespace std;

class LinearSearch
{
private:
    int i,a=5;
public:
    void Search(int ax[] , int n , int x)
    {
        for(i=1;i<=n;i++)
        {
            if(ax[i] == x)
            {
                cout << "Found at Index " << i << endl;
                a=2;
            }
        }
        if(a==5)
        {
            cout << "Not Found";
        }
    }

};

int main()
{
    int n,i,x;

    cout << "Enter how many index" << endl;
    cin >> n;
    int ax[n];
    cout << "Enter array values" << endl;
    for(i=0;i<n;i++)
    {
        cin >> ax[i];
    }
    cout << "Enter value for search" << endl;
    cin >> x;

    LinearSearch test;
    test.Search(ax,n,x);
}
