#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string t;
    cin>>s>>t;
    int i=0;
    int j=0;
    while(i<s.length() && j<t.length()){
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<i+1<<endl;
    return 0;
}