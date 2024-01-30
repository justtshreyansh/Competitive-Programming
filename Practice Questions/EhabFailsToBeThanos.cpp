#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+n];
   
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
        
    }
    bool flag = false;
    for(int i=0;i<n+n-1;i++){
        if(arr[i]!=arr[i+1]){
            flag = true;
        }
    }
    sort(arr,arr+2*n);
    if(flag){
        for(int i=0;i<n+n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    

    return 0;
}