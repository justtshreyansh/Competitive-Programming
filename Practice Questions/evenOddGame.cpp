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
        sort(arr,arr+n);
        reverse(arr,arr+n);
        bool turn  = true;
        long long alice =0;
        long long bob =0;
        for(int i=0;i<n;i++){
            if(turn){
                if(arr[i]%2==0){
                alice+=arr[i];
                }
                turn  = false;
            }
            else{
                if(arr[i]%2==1){
                    bob+=arr[i];

                }
                turn  = true;
            }
            

        }
        if(alice>bob) cout<<"Alice"<<endl;
        else if(alice<bob) cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
    }
    return 0;
}