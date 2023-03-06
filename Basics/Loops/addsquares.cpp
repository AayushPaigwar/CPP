//Write a program to add square of n numbers.
#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the numeber:";         //input from the user.
    cin>>n;
    for(int i=0;i<=n;i++)               //conditon.
    {
        sum = sum +(i*i);               //to store the addition.
    }
    cout<<sum<<" is the addtion of numbers.";
}

/*OUTPUT:
Enter the numeber:3
14 is the addtion of numbers.
*/