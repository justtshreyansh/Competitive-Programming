#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int arr[n];
        int odd =0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0) odd++;
        }
        int ans = INT_MAX;
        if(odd%2==0) cout<<0<<endl;
        else{
            for(int i=0;i<n;i++){
                if(arr[i]%2==0){
                    int count =0;
                    while(arr[i]%2!=1){
                        count++;
                        arr[i]/=2;
                    }
                    ans = min(ans,count);
                }
                else{
                    int count =0;
                    while(arr[i]%2!=0){
                        count++;
                        arr[i]/=2;
                    }
                    ans = min(ans,count);
                }
            }
            cout<<ans<<endl;
        }
        
    
    }
    return 0;
}