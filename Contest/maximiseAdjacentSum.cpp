#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int> ());
        long long maxi =0;
        for(int i=0;i<n-1;i++){
            maxi+=((arr[i]+arr[i+1]));
        }
        cout<<maxi<<endl;
    }
    return 0;
}