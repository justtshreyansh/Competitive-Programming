#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    long long ans = 1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
        
    }
    bool flag = false;
    for(int i=0;i<n;i++){
        ans*=arr[i];
        if(ans>=1e18){
            flag = true;
            break;
        }
        
            
       
        
        
    }
    if(flag || ans>=1e18) cout<<-1<<endl;
    else cout<<ans<<endl;
    
   

    return 0;
}