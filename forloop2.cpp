//program to print all the numbers till 100 but skipping the numbers which are divisible by 3
#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 100; i++)
    {
        if (i%3==0)
        {continue;
        }
        cout<<i<<endl;

    }
    
}