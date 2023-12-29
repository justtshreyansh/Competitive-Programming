#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];
        long long pos = 0;
        long long neg = 0;
        for(int i=1;i<=n;i++){
            if(arr[i]>=0){
                pos+=arr[i];
            }
            else{
                if(pos >= abs(arr[i])){
                    pos-=abs(arr[i]);
                }
                else{
                    neg+= abs(arr[i]) - pos;
                    pos = 0;

                }

            }
        }
        cout<<neg<<endl;
    }
    return 0;
}