#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter Number of Rows: ";

    cin>>a;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}