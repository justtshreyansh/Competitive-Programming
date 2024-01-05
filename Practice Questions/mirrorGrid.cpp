#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string mat[n];
        for(int i=0;i<n;i++){
            cin>>mat[i];
        }
        int x = n/2;
        int y = n/2;
        if(n%2==1){
            y++;
        }
        int ans = 0;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                int ones = 0;
                ones+=mat[i][j]-'0';
                ones+=mat[j][n-i-1]-'0';
                ones+=mat[n-i-1][n-j-1]-'0';
                ones+=mat[n-j-1][i]-'0';
                if(ones==2){
                ans+=ones;
                }
                else if(ones==1 || ones==3){
                    ans+=1;
                }
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}