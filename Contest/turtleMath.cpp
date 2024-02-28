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
        long long  sum=0;
        int x =-1;
        int y =-1;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
           
            mpp[arr[i]]++;
            if(arr[i]%3==1){
                x = arr[i];
            }
            if(arr[i]%3==2){
                y =arr[i];
            }
            sum+=abs(arr[i]);

        }
        int moves;
        int r =sum%3;
        if(r==0) moves =0;
        else if((sum-x)%3==0 || (sum-y)%3==0){
            moves= 1;
        }
        else if(r==2) moves =2;
        cout<<moves<<endl;

    }
    return 0;
}