#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,a,b;
    cin>>n>>a>>b;
    long long x =-1,y;
    for( y=0;y<=1e7;y++){
        if((n-y*b)%a==0 && (n-y*b)>=0){
            x = (n-y*b)/a;
            break;
        }
    }
    if(x!=-1){
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}