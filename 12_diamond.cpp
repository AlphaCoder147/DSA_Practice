#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Rows: ";
    cin >> x;
    //upper half
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
    //lower half
    for(int i = x-1; i > 0; i--)
    {
        for(int j = 0; j < x - i; j++)
        {
            cout << "  ";
        }
        for(int k = 0; k < 2* i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}