#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,d;
    cin>>a>>b>>d;

    int ans = a;
    while(ans!=b){
        cout<<ans<<" ";
        ans+=d;
    }
    cout<<ans<<endl;
    
    return 0;
}