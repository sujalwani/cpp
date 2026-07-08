#include <iostream>
using namespace std;

// int main(){
//     int n ;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     if(n>0){
//         cout<<"Number is positive"<<endl;
//     }else{
//         cout<<"Number is negative"<<endl;
//     }
//     return 0;
// }

// int main() {
//     int age ;
//     cout<<"Enter your age : ";
//     cin>>age;
//     if(age>=18){
//         cout<<"You are eligible for vote"<<endl;
//     }else{
//         cout<<"You are not eligible for vote"<<endl;
//     }
//     return 0;
// }

// int main(){
//     int num ;
//     cout<<"Enter any number : ";
//     cin>>num;
//     if(num%2==0){
//         cout<<"Number is even\n";
//     }else{
//         cout<<"Number is odd\n";
//     }
//     return 0;
// }

// int main() {
//     int marks;
//     char grade;
//     cout<<"Enter the marks of student : ";
//     cin>>marks;
//     if(marks>=90){
//         grade='A';
//     }else if(marks>=70 && marks<90){
//         grade='B';
//     }else if(marks>=50 && marks<70){
//         grade='C';
//     }else if(marks>=35 && marks<50){
//         grade='D';
//     }else{
//         grade='F';
//     }
//     cout<<"Your grade is "<<grade<<endl;
//     return 0;
// }

int main(){
    char ch;
    cout<<"Enter any character : ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"Character is Lowercase\n";
    }else if(ch>='A' && ch<='Z'){
        cout<<"Character is Uppercase\n";
    }else{
        cout<<"It is not a alphabet ";
    }
    return 0;
}