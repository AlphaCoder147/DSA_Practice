#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Rows: ";
    cin >> x;

    for(int i = 0; i< x; i++)
    {
        if(i == 0 || i == x-1)
        {
            for(int j = 0; j < x; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for(int j = 0; j < x - 2; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}