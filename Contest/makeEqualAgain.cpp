#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag = true;
        int low =0;
        int high = n-1;
        int ans =0;
        while(arr[high]==arr[n-1]){
            high--;
        }
        while(arr[low]==arr[0]){
            low++;
        }
        if(n==1){
           cout<<0<<endl;
           continue;


        }
        if(arr.front()!=arr.back()){
            cout<<min(n-low,high+1)<<endl;
            continue;
        }
        cout<<max(0,high-low+1)<<endl;

    }
    return 0;
}