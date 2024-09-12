#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the row no : ";
    cin >> r;
    cout << "Enter the column no : ";
    cin >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print matrix
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // spiral print
    int minr = 0, minc = 0, maxr = r - 1, maxc = c - 1;
    int tnum=r*c;
    int count=0;
    while (minr <= maxr && minc <= maxc)
    {
         // right
         for (int i = minc; i <= maxc && count<tnum; i++)
         {
            cout<<arr[minr][i]<<" ";
            count++;
         }
         minr++;
         // down
         for (int i = minr; i <= maxr && count<tnum; i++)
         {
            cout<<arr[i][maxc]<<" ";
            count++;
         }
         maxc--;
         // left
         for (int j = maxc; j >= minc && count<tnum; j--)
         {
            cout<<arr[maxr][j]<<" ";
            count++;
         }
         maxr--;
         // up
         for (int j = maxr; j >= minr && count<tnum; j--)
         {
            cout<<arr[j][minc]<<" ";
            count++;
         }
         minc++;
    }
    return 0;
}