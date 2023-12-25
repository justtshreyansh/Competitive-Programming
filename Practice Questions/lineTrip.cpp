#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[100];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi = 0;
        for(int i=1;i<n;i++){
            maxi = max((k- arr[n-1])*2,max(maxi,arr[i]-arr[i-1]));
            
            
        }
        if(n==1){
            cout<<arr[0]<<endl;
        }
        else{
            cout<<maxi<<endl;
        }
        
    }
    return 0;
}