#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch='A';
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout <<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        ch++;
        cout << endl;
    }
    return 0;

    // int n;
    // cin >> n;
    // for (int i = 0; i <n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n;
    // cin >> n;
    // for (int i = 0; i <n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout <<" ";
    //     }
    //     for(int j=0;j<n-i;j++){
    //         cout<<i+1;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n;
    // cin >> n;
    // int num = 1;
    // for (int i = 1; i <n; i++)
    // {
    //     for (int j = 1; j < i+1; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n;
    // cin >> n;
    // for (int i = 0; i <n; i++)
    // {

    //     for (int j = i+1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n;
    // cin >> n;
    // for (int i = n; i > 0; i--)
    // {

    //     for (int j = 1; j < i + 1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // int n;
    //     cin>>n;
    //     for(int i=0;i<n;i++){

    //         for(int j=1;j<i+1;j++){
    //             cout<<j<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     return 0;

    // int n;
    // cin>>n;
    // char ch='A';
    // for(int i=0;i<n;i++){

    //     for(int j=0;j<i+1;j++){
    //         cout<<ch;
    //     }
    //     ch++;
    //     cout<<endl;
    // }
    // return 0;

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }
    // return 0;
}