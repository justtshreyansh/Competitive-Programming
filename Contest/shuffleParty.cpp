#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans=  log2(n);
        long long final = pow(2,ans);
        cout<<final<<endl;

    }
    return 0;
}