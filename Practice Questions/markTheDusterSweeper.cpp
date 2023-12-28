#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        //2 0 0
        long long countZ = 0;
        long long ans = 0;
        bool flag = false;
        for(int i=1;i<=n-1;i++){
            ans+=arr[i];
            if(arr[i]>0) flag = true;
            if(arr[i]==0 && flag==true) countZ++;



        }
        cout<<ans+countZ<<endl;
    }
}