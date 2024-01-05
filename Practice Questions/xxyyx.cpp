#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    bool flag = false;

    if(abs(b-c)<=1){
        if(a!=0 && d!=0){
            if(b>0 || c>0){
                flag = true;
            }
        }
        else{
            flag = true;
        }
    }
    if(flag) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}