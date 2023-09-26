#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Rows: ";
    cin >> x;

    for(int i = x; i > 0; i--)
    {
        if(i == x)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
            for(int j = 0; j < i; j++)
            {
                if(j == 0 || j == i-1)
                    cout << "*  ";
                else cout << "  ";    
            }
            cout << endl;
        }
    return 0;
}