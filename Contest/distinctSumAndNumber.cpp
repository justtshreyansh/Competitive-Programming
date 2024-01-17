#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        int largest =9;
        while(n>0){
            if(n>largest){
                n-=largest;
                ans.push_back(largest);
                largest--;
            }
            else{
                ans.push_back(n);
                n=0;
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}