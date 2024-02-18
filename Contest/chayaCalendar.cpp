#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];;
        for(int i=0;i<n;i++) cin>>arr[i];
        long long ans =0;
        set<int> st;
        for(int i=0;i<n;i++){
            long long x =1;
            long long value = arr[i];
            while(true){
                if(arr[i]>ans && st.find(arr[i])==st.end()){
                    break;
                }
                arr[i] = x*value;
                x++;
               
            }
            st.insert(arr[i]);
            ans = arr[i];
           
        }
        cout<<arr[n-1]<<endl;
       
    }
    
    return 0;
}