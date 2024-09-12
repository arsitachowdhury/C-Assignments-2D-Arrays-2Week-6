#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter the row and column no : ";
    cin >> m;
    int arr[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print matrix
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // diagonal print
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i==j ||i+j==m-1){
            cout << arr[i][j] << " ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}