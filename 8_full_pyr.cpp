#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Rows: ";
    cin >> x;

    for(int i = 1; i <= x; i++)
    {
        for(int j = 1; j <= x-i; j++)
        {
            cout << "  ";
        }
        for(int k = 1; k <=2*i -1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}