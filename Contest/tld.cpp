#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    string str = "";
    for(int i=S.size()-1;i>=0;i--){
        if(S[i]=='.'){
            break;
        }
        else{
            str+=S[i];
        }
    }
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}