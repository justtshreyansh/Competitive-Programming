#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int first =0;
    int second =0;
    string ans= "";
    for(int i=0;i<s.size();i++){
        if(s[i]=='|'){
            first = i;
            break;
        }
        
    }
     for(int i=0;i<s.size();i++){
        if(s[s.size()-i-1]=='|'){
            second = s.size()-i-1;
            break;
        }
        
    }
    for(int i=0;i<s.size();i++){
        if(i>=first && i<=second){
            continue;
        }
        else{
            ans+=s[i];
        }
    }
    cout<<ans<<endl;
    

    return 0;
}