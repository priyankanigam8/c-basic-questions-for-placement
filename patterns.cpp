//------------------------1---------------------------------
// #include<iostream>
// using namespace std;
// int main(){
//     int i =1;
//     i= i++ + ++i;
//     cout<<i<<endl;
//     return 0;

// }

//---------------------------------------2--------------------------------------------------------
//pattern based question-----------
//1--solving the reactangle based
// #include<iostream>
// using namespace std;
// int main(){
//     int rows,cols;
//     cout<<"Enter the rows and coulmns in rectangular dimension";
//     cin>>rows>>cols;

//     for (int i = 1; i <=rows; i++){
//         for (int j = 1; j <= cols; j++){
//             cout<<"*";
//         }   
//         cout<<endl;
//     }
//     return 0;
    
// }
//--------------------------------------------3---------------------------------------------------
//hollow rectangle based---
// #include<iostream>
// using namespace std;
// int main(){
//     int rows,cols;
//     cout<<"Enter the row and coulumns you want;";
//     cin>>rows>>cols;

//     for (int i = 1; i <=rows; i++){
//         for (int j =1; j<=cols; j++)
//         {
//             if (i==1 || i==rows || j==1 ||j==cols)
//             {
//                cout<<"*";
//             }
//             else{
//                 cout<<" ";              
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//-------------------------------------------4----------------------------------------------------
//half pyramid 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     for (int i = n; i>=1; i--){
//         for (int j = 1; j <=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;     
//     }
//     return 0;
// }
//-----------------------------------------------5------------------------------------------------
// half pyrmid after 180 rotation
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n";
//     cin>>n;

//     for (int i = 1; i <=n; i++){
//         for (int j = 1; j<= n; j++)
//         {
//            if (j<=n-i)
//            {
//                cout<<" ";
//            }
//            else
//            {
//                cout<<"*";
//            }
//         }
//         cout<<endl;
        
//     }
//     return 0;
    
// }
//------------------------------------------------6-----------------------------------------------------------

//half pyramid using number
//like---------
// 1
// 22
// 333
// 4444
// 55555

//code--
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n:";
//     cin>>n;

//     for (int i = 1; i<=n; i++){
//         for (int j= 1; j <=i; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;   
//     }  
// }
//----------------------------------------------7-------------------------------------------------------------

//*************Floyds traiangle****************
// like----
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// code---
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n:";
//     cin>>n;
//     int count = 1;
//     for (int i = 1; i <=n; i++){
//         for (int j = 1; j<=i; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//-----------------------------------------8------------------------------------------------------------------
// butterfly pattern 
// like
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
//code---
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number n:";
//     cin>>n;
//     for (int i = 1; i <=n; i++){
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<"*";
//         }
//         int space= 2*n - 2*i;
//         for (int j = 1; j<=space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;     
//     }
//     for (int i = n; i >=1; i--){
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<"*";
//         }
//         int space= 2*n - 2*i;
//         for (int j = 1; j<=space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;    
//     }
// }
//--------------------------------------------9---------------------------------------------------------------
// Inverted numbered pattern
// eg--
// 12345
// 1234
// 123
// 12
// 1
// code--
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i =1; i <=n; i++){
//         for (int j = 1;j <=n+1-i; j++)  //n+1-i
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
        
        
//     }
    

// }
//-------------------------------------------------10----------------------------------------------------------
// 0-1 pattern question
// eg---
// 1
// 01
// 101
// 0101
// 10101
// code--
// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin>>n;
//     for (int i = 1; i <=n; i++){
//         for (int j= 1; j <= i; j++){
//             if ((i+j) %2==0)
//             {
//                 cout<<"1";
//             }
//             else
//             {
//                 cout<<"0";
//             }  
//         }
//         cout<<endl;     
//     }
//     return 0;   
// }
//-------------------------------------------------11----------------------------------------------------------
// rhombus pattern question

// eg----
//     *****
//    *****
//   *****
//  *****
// *****
// code--
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i=1; i <=n; i++){
//         for (int j =1; j<=n-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <=n; j++)
//         {
//             cout<<"*";
//         }
        
//         cout<<endl;
//     }
    
// }
//-------------------------------------------------12----------------------------------------------------------
//numbered  pattern question
// eg-
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
// code-
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++){
//         for (int j = 1; j <=n-i; j++)
//         {
//             cout<<" " ;
//         }
//         for (int j = 1; j <=i; j++)
//         {
//            cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
//-------------------------------------------------13----------------------------------------------------------
//palindrome numbered pattern
// eg-
//     1
//    212
//   32121
//  4321234
// 543212345
// code-
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for (int i = 1; i <=n; i++){
        
//         for (int j = 1; j <= n-i; j++){
//             cout<<" ";
//         }
//         int k=i;
//         for (int j = 1; j <=n;j++){
//             cout<<k--<<" ";
//         }
//         k=2;
//         for (int j=1; j=n+i-1; j++){
//             cout<<k++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//-------------------------------------------------14----------------------------------------------------------
//Star pattern
// eg-
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// code-
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++){
//         for (int j=1; j<=n-i;j++){
//             cout<<" ";
//         }
//         for (int j = 1;j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl; 
//     }
//     for (int i = n; i >=1; i--){
//         for (int j=1; j<=n-i;j++){
//             cout<<" ";
//         }
//         for (int j = 1;j<=2*i-1; j++){
//             cout<<"*";
//         }
//         cout<<endl; 
//     }
    
// }
//-----------------------------------------------------------------------------------------------------------
