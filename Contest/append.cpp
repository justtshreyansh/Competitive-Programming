#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    vector<int> ans;
    while(q--){
        int a;
        int b;
        cin>>a>>b;
        if(a==1) ans.push_back(b);
        else {
            cout<<ans[ans.size()-b]<<endl;
        }
    }
    return 0;
}