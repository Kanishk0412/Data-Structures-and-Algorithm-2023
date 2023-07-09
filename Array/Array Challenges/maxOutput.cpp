#include<iostream>
using namespace std;

int main()
{
    int mx = -19999999;

    int n;
    int a[n];

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout<<mx<<endl;
    }
    
    
    return 0;
}