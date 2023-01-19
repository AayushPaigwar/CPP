// Write a program to add cube of n numbers.
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the number:";          //input from the user
    cin>>n;
    for(i=1;i<=n;i++)                   //to read all numbers till n.
    {
        sum= sum +(i*i*i);              //to add the cube of numbers till n.
    }
    cout<<sum<<" is the addition";      //printing the addition.
}