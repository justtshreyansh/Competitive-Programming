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
        int first1 =0;
        int lastone =0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                first1 =i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==1){
                lastone = i;
                break;
            }
        }
        int count =0;
        for(int i=first1;i<lastone;i++){
            if(arr[i]==0) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}