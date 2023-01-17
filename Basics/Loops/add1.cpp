//Write a program to add n numbers using while loop.

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=0;
    cout<<"Enter the number:";      //Taking input from the user.
    cin>>n;
    while(i<=n)                    //loop will run till i<=n. 
    {
        sum= sum+i;                //adding all value in sum.
        i++;
    }
    cout<<sum<<" is the addition. "; //printing the addition of n numbers.
}

/*OUTPUT:
Enter the number:3
6 is the addition.*/