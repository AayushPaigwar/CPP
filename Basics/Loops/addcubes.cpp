// Write a program to add cube of n numbers.
#include<iostream>
using namespace std;
int main()
{
    int i,number,sum=0;
    cout<<"Enter the number:";          //input from the user
    cin>>number;
    for(i=1;i<=number;i++)                   //to read all numbers till n.
    {
        sum= sum +(i*i*i);              //to add the cube of numbers till n.
    }
    cout<<sum<<" is the addition";      //printing the addtion.
}