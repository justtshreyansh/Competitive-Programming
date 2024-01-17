#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        long long b;
        cin>>a>>b;
        long long x = a+b;
        bool prime  = true;
        if(x==1) prime = false;
        for(long long i=2;i*i<=x;i++){
            if(x%i==0){
                prime = false;
            }
        }
        if((a-b)==1 && prime){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
       
    }
    return 0;
}