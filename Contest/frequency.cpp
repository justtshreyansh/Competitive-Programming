#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    char smallest = 'z';
    for(int i=0;i<s.size();i++){
            if(s[i]<=smallest){
                smallest = s[i];
            }
    }
     int mini = 0;
     
    for(auto it:mpp){
        if(it.second>mini ){
            mini = it.second;
            smallest = it.first;

        }
    }
    cout<<smallest<<endl;
    return 0;
}