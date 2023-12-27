#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
        if(arr[i]<arr[i+1]){
            int temp = arr[i]+1;
            while(temp<arr[i+1]){
                cout<<temp<<" ";
                temp++;
            }
        }
        else{
            int temp = arr[i]-1;
            while(temp>arr[i+1]){
                cout<<temp<<" ";;
                temp--;
            }
        }
    }
    cout<<arr[n-1]<<" ";
    return 0;
}