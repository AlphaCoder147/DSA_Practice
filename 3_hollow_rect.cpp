#include<iostream>
using namespace std;
int main()
{
    int x,y; //rows and columns
    cin >> x >> y;
    for(int i = 0; i < x; i++)
    {
        if(i == 0 || i== x-1){
            for(int j = 0; j < y; j++)
                cout << "* ";
        }
        else{
            cout << "* ";
            for(int j = 0; j < y-2; j++)
                cout << "  ";
            cout << "* ";    
        }
        cout << endl;
    }
    return 0;

}