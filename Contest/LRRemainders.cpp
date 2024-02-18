#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        string s;
        cin>>s;
        // 3 1 4 2
        int low = 0;
        int high = n-1;
        for(int i=0;i<n;i++){
            long long ans= 1;
            for(int j =low;j<=high;j++){
                ans*=arr[low];
            }
            cout<<ans%m<<" ";
            if(s[i]=='L') low++;
            else high--;

        }
        cout<<endl;
    }
    return 0;
}