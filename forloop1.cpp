//program to display multiplication tables upto 10...
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the positive number:"<<endl;
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
    
    
}