#include<iostream>
using namespace std;

class SparseMatrix
{
private:
    int i,j,k=0,arr[100][3];

public:
    void sprsmat(int row,int col)
    {
        int ar[row][col];

        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin >> ar[i][j];
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(ar[i][j] != 0)
                {
                    k=k+1;
                    arr[k][0]=i;
                    arr[k][1]=j;
                    arr[k][2]=ar[i][j];
                }
            }
        }
        arr[0][0]=row;
        arr[0][1]=col;
        arr[0][2]=k;

        for(i=0;i<=k;i++)
        {
            cout << arr[i][0] <<" " << arr[i][1] <<" " << arr[i][2] <<" " << endl;
        }
    }
};

int main()
{
    int row,col,i,j;
    cin >> row;
    cin >> col;
    /*int ar[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin >> ar[i][j];
        }
    }*/

    SparseMatrix test;
    test.sprsmat(row,col);
}
