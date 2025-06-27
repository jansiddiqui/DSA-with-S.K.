#include<bits/stdc++.h>
using namespace std;

void sumOfDigit(int n){
    int digitSum =0;
    while(n>0){
        int lastDigit = n%10;
        n=n/10;
        digitSum += lastDigit;
    }
    cout<<"Sum of digits is: "<<digitSum<<endl;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sumOfDigit(n);
    return 0;
}