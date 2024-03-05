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
        int rooms=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                rooms+=(arr[i]/2);
            }
            else rooms+=(arr[i]/2)+1;
        }
        cout<<rooms<<endl;
    }
    return 0;
}