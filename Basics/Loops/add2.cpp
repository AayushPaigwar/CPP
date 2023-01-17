//Write a program to add n numbers using do while loop.
#include<iostream>
using namespace std;
int main()
{
    int n,i=0,sum=0;
    cout<<"Enter the number:";      //input from the user.
    cin>>n;
    do
    {
        sum= sum+i;                 //addition will store here.
        i++;                        //increment value of i.
    } while (i<=n);                 //condition 
    cout<<sum<<" is the addition.";
}

/*OUTPUT:
Enter the number:3
6 is the addition.
*/