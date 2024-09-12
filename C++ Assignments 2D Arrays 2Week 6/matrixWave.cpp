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
    // wave print 1 2 3 6 5 4 7 8 9
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else{
            for (int j = c-1; j >=0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}