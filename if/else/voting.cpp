#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter your age: ";

    cin>>a;

    if (a>=18)
    {
        cout<<"You can Vote."<<endl;
    }
    else{
        cout<<"You can not Vote."<<endl;
    }
    
    return 0;
}