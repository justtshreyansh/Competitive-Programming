#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=0;
    int pos[n] = {0};
    for(int i=0;i<n-1;i++){
        if(gcd(arr[i],arr[i+1])!=1){
            pos[i] = 1;
            k++;
        }
    }
    cout<<k<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        if(pos[i]) cout<<1<<" ";
    }
    cout<<endl;

    return 0;
}