#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string,int> mpp;
    vector<string> ans;
    while(t--){
        string s;
        cin>>s;
        if(mpp[s]++==0){
             cout<<"OK"<<endl;
             continue;
        }
        cout<<s<<mpp[s]-1<<endl;
        
    }
    
   
    return 0;
}