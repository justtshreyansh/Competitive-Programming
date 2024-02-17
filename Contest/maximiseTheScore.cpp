#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+(2*n));
        long long score =0;
        for(int i=0;i<2*n-1;i+=2){
            score+= min(arr[i],arr[i+1]);
        }
        cout<<score<<endl;
    }
    return 0;
}