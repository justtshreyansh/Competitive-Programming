#include<bits/stdc++.h>
using namespace std;
bool solve(int *arr,int n){
    if(n<=2) return false;
    int sum =0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2!=0){
            return false;
        }
        int  maxi = *max_element(arr,arr+n);
        if(maxi*2>sum) {
           return false;
        }
        return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        bool ans = solve(arr,n);
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}