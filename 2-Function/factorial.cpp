#include<bits/stdc++.h>
using namespace std;

void factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    factorial(n);
    return 0;
}