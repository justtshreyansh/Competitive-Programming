#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        
        int first=  abs(arr[n-1] - arr[0]);
        int second = abs(arr[n-2] - arr[1]);
        long long ans= 2*first + 2*second;
        cout<<ans<<endl;

    }
    return 0;
}