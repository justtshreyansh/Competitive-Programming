#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> T,M;
        for(int i=0;i<n;i++){
            if(s[i]=='T'){
                T.push_back(i);
            }
            else{
                M.push_back(i);
            }
        }
        bool ans = true;
        if(T.size()!=2*M.size()){
            ans = false;
        }
        else{
            int x = M.size();
            for(int i=0;i<x;i++){
                if(!(T[i]<M[i] && T[i+x] >M[i])){
                    ans= false;
                }
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}