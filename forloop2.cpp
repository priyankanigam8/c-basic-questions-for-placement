//program to check wheather a number is prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int i;
    for ( i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            cout<<"The number is not prime number"<<endl;
            break;
        }
        
    }
if (i==n)
{
    cout<<"The number is prime"<<endl;
}
return 0;
    }
    