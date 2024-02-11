#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int first= 0;
        int last =n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                first = i;
                break;
            }

        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B'){
                last =i;
                break;
            }
        }

        cout<<last-first+1<<endl;

    }
    return 0;
}