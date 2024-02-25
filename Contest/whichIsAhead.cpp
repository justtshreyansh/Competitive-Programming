#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        int indexA=0;
        int indexB =0;
        for(int i=0;i<n;i++){
            if(arr[i]==a){
                indexA = i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==b){
                indexB = i;
                break;
            }
        }
        if(indexA>=indexB){
            cout<<b<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
    return 0;
}