#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[100];
        int count = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(k>=2) cout<<"YES\n";
        else{
            int ans[100];
            for(int i=0;i<n;i++){
                ans[i]=arr[i];
            }
            sort(ans,ans+n);
            
            for(int i=0;i<n;i++){
                if(ans[i]!=arr[i]){
                    count++;
                    cout<<"NO\n";
                    break;
                }
            }
            if(count==0){
                cout<<"YES\n";
            }
            
        }
    }
        
    return 0;
}