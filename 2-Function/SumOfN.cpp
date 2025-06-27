#include<bits/stdc++.h>
using namespace std;
void sumN(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum<<endl;
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    sumN(n);
    return 0;
}