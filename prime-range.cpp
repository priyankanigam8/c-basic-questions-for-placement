//example1---switch statement

//  #include<iostream>
// using namespace std;
// int main(){
//     char button;
//     cout<<"Enter the specific character from a,b,c,d,e:"<<endl;
//     cin>>button;
//     switch (button)
//     {
//     case 'a':
//         cout<<"hello"<<endl;
//         break;
//     case 'b':
//         cout<<"namastey"<<endl;
//         break;
//     case 'c':
//         cout<<"hola"<<endl;
//         break;
//     case 'd':
//         cout<<"salut"<<endl;
//         break;
//     case 'e':
//         cout<<"ciao"<<endl;
//         break;
    
    
//     default:
//     cout<<"I am still learnig more!!";
//         break;
//     }
// }

//example 2--making a simple calculator using switch case;
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers";
    cin>>n1,n2;

    char op;
    cout<<"Enter the operator";+
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '%':
        cout<<n1%n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    
    default:
        cout<<"you entered the special character.enter another operator" <<endl;
        break;
    }
    return 0;
}
