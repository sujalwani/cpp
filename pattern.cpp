#include <iostream>
using namespace std;

// int main() {
//     int n ;
//     cout <<"Enter the number of rows";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    // return 0;
// }

// int main() {
//     int n ;
//     cout<<"Enter the no of rows : ";
//     cin>>n;

//     for(int i=1; i<=n ; i++){
//         for(int j=1;j<=n ; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main() {
//     int n;
//     char a ='A';
//     cout<<"Enter the no of rows : ";
//     cin>>n;

//     for(int i=1;i<=n;i++){           
//         int b=int(a);                char ch = 'A';
//         for(int j=1;j<=n;j++){
//             cout<<char(b)<<" ";      cout<<ch<<" ";
//             b++;                     ch = ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     int num = 1;
//     cout<<"Enter the number of rows : ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n ;
//     cout<<"Enter the number of rows: ";
//     cin>>n;

//     char ch ='A';

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<ch<<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n ;
//     cout<<"Enter the number of rows : ";
//     cin>>n;

//     for(int i=1;i<=n;i++){;
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n ;

//     char ch='A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<ch<<" ";
//         }
//         ch=ch+1;
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"Enter the number of rows : ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    char ch ='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch =ch+1;
        }
        cout<<endl;
    }
    return 0;
}