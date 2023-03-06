//Write a program to print the largest of three numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<a<<" is the greatest";
        else
        cout<<c<<" is the greatest";
    }
    else
    {
        if(b>c)
        cout<<b<<" is greatest";
        else
        cout<<c<<" is greatest";
    }
} 

