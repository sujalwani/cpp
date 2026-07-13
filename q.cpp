#include <stdio.h>
#include <iostream>
using namespace std;

void printHello();
int sum (float a , float b);
void minOfTwoNumbers(int a, int b);
int sumOfN(int n);
int factN(int n);
int sumOfDigits(int n);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int digitsSum = sumOfDigits(n);
    cout << "The sum of the digits of " << n << " is: " << digitsSum << endl;
    
    return 0;
}

void printHello() {
    cout << "Hello, World!" << endl;
}

int sum (float a , float b) {
    return a + b;
}

void minOfTwoNumbers(int a, int b) {
    if (a <= b) {
        cout << "The minimum number is: " << a << endl;
    } else {
        cout << "The minimum number is: " << b << endl;
    }
}

int sumOfN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int factN(int n){
    int fact = 1;

    for(int i=1; i<=n ;i++){
        fact = fact*i;
    }

    return fact;
}

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}