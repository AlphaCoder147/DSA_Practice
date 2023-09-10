#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Rows: ";
    cin >> x;
    for(int i = x; i >= 0; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}