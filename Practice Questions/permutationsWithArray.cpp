#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    long long b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            count++;
            cout<<"no";
            break;
        }
    }
    if(count==0){
        cout<<"yes";
    }
    return 0;
}