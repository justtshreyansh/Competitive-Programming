#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool cap = false;
    char ch = s[0];
    if(ch>=65 && ch<=90){
        cap = true;
    }
    bool low = true;
    for(int i=1;i<s.size();i++){
        char ch = s[i];
        if(ch>=97 && ch<=122){
            low= true;
        } 
        else{
            low = false;
            break;
        }
    }
    if(cap && low){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}