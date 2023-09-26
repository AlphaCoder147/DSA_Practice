#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Rows: ";
    cin >> x;

    for(int i = 0; i <= x; i++)
    {
        for(int j = 0; j < x-i; j++)
        {
            cout << "  ";
        }
        if(i == x)
        {
            for(int j = 0; j < 2*i-1; j++)
            {
                cout << "* ";
            }
        }
        else
            for(int j = 0; j < 2*i-1; j++)
            {
                if(j == 0 || j == 2*i-2)
                    cout << "* ";
                else cout << "  ";    
            }
        cout << endl;
    }
    
    return 0;
}