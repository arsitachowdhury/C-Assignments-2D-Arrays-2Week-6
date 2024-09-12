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
    // rotate 90 degree anticlockwiae
    cout << endl;
    for (int i = c-1; i >=0; i--)
    {
            for (int j = 0; j < r; j++)
            {
                cout << arr[j][i] << " ";
            }
        cout<<endl;
    }
    return 0;
}