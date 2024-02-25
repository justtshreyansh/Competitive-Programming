#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int q;
    cin>>q;
    while(q--){
        char c,d;
        cin>>c>>d;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                s[i]=d;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}