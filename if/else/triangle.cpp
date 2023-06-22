#include<iostream>
using namespace std;

int main()
{
    int side1, side2, side3;
    cout<<"Enter sides of Triangle: ";
    cin>>side1>>side2>>side3;

    if (side1==side2 && side2==side3)
    {
        cout<<"Triangle is equilateral."<<endl;
    }
    else if (side1==side2 || side1==side3 || side2==side3)
    {
        cout<<"Triangle is isosceles."<<endl;
    }
    else{
        cout<<"Triangle is scalene."<<endl;
    }
    
    
    return 0;
}