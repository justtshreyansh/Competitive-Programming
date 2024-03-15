#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n];
        int brr[m];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int j=0;j<m;j++){
            cin>>brr[j];
        }
        int ans =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i]+brr[j]<=k){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
   
}