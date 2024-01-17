#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans = {4,7,47,74,447,474,477,744,747,774};
    for(int i=0;i<ans.size();i++){
        if(n%ans[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}