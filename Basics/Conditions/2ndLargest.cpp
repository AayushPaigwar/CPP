//Write a program to print the second largest of three numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(b>c)
        cout<<b<<" is second largest";
        else if(a>c)
        cout<<c<<" is second largest";
        else
        cout<<a<<" is second largest";
    }
    else
    {
        if(b>c)
        cout<<c<<" is second largest";
        else if(c<a)
        cout<<a<<" is second largest";
        else
        cout<<b<<" is second largest";
    }
} 