#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag = false;
        for(int a=2;a<=n;a++){
            for(int b=2;b<=n;b++){
                
                if(n%a==n%b && a!=b){
                    cout<<a<<" "<<b<<endl;
                    flag = true;
                    break;
                } 
                
            }
            if(flag) break;
        }
    }
    return 0;
}