#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t; //5
    while(t--){
        int n;
        cin>>n;
        if(n==1 || n==2 || n==3){
            cout<<1<<endl;
            
        }
        else{
            cout<<n/2<<endl;
        }
    }
    return 0;
}