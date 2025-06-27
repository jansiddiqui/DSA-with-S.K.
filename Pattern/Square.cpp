#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int num=1;
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<ch++<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<num;
    return 0;
}