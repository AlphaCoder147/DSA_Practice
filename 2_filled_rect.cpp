#include<iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter Rows and Columns respectively: ";
    cin >> x >> y;
    cout << endl;
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
/*
*****
*****
*****
*/