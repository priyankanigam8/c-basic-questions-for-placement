//program to add only positive numbers.
#include<iostream>
using namespace std;
int main(){
    int n ;
    int sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while (n>=0)
    {
        sum=sum+n;
        cout<<"Enter the another number"<<endl;
        cin>>n;
    }
    cout<<"The sum of the positive numbers are"<<sum<<endl;
    return 0;
    

}