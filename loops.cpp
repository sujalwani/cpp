#include <iostream>
using namespace std;

// int main(){
//     int count = 1;
//     while(count<=5){
//         cout<<count<<" ";
//         count++;
//     }
//     return 0;
// }
int main(){
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n;
    int sum = 0 ;
    for(int i=1;i<n;i++){
        if(i%2 != 0){
            sum+=i;
        }
    }
    cout<<"sum = "<<sum;
    return 0;
}