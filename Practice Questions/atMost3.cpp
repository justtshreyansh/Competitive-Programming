#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,w;
    cin>>n>>w;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool count[3000001];
    for(int i=0;i<3000001;i++){
        count[i]=false;
    }
    for(int i=0;i<n;i++){
        count[arr[i]] = true;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            count[arr[i]+arr[j]]=true;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                count[arr[i]+arr[j]+arr[k]] = true;
            }
        }
    }
    int ans = 0;
    for(int i=0;i<=w;i++){
        if(count[i]==true){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}