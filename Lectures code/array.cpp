#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =10;
    int a[n]; 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+10);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}