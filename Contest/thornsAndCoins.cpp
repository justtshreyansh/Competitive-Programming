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
        int index =n;
        for(int i=1;i<n;i++){
            if(s[i-1]=='*' && s[i]=='*'){
                index =i-1;
                break;
            }
        }
        int ans =0;
        for(int i=0;i<index;i++){
            if(s[i]=='@'){
                ans++;
            }
           
        }
        cout<<ans<<endl;
    }
    return 0;
}