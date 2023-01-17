//Write a program to add n numbers using for loop.

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number:";          //input from user.
    cin>>n;
    for(int i=0;i<=n;i++)               //condition.
    {
        sum=sum+i;                      //store the sum of i till i<=n. 
    }
    cout<<sum<<" is the addtion.";     //printing the addition.
}
/*OUTPUT:
Enter the number:3
6 is the addtion.
*/