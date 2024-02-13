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
        bool flag = true;
        int sum =0;
        int avg =0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%n==0){
            avg= sum/n;

        }
        else{
            flag = false;
        }
        int extra =0;
        for(int i=0;i<n;i++){
            if(arr[i]>=avg){
                extra+=(arr[i]-avg);
            }
            else{
               if(arr[i]+extra>=avg){
                    extra = extra+ arr[i]-avg;
               }
               else{
                flag = false;
                break;
               }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}