#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a, b;
    cout<<"Enter 2 Numbers: ";
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is: "<<sum(a,b)<<endl;
    cout<<"Minimum is "<<minOfTwo(a,b)<<endl;
    return 0;
}