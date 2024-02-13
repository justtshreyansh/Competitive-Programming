#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       
        vector<int> ans;
        int count =3;
        int a =3;
        while(a--){
            if(n>=26+count-1){
            ans.push_back(26);
            n-=26;
            count--;
        }
        else{
            ans.push_back(n-count+1);
            n-=(n-count+1);
            count--;
        }
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            char ch = 96+ans[i];
            cout<<ch;
        }
        cout<<endl;
        

    }
    return 0;
}