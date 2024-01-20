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
        set<int> st;
        for(int i=0;i<n;i++){
            while(arr[i]%2==0){
                st.insert(arr[i]);   
                arr[i]/=2;
            }
        }
        cout<<st.size()<<endl;
    }
    return 0;
}