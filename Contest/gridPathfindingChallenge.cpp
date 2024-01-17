#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    bool top = x-d>1;
    bool down = x+d<n;
    bool right = y+d<m;
    bool left = y-d>1;
    bool path1 = (top && right);
    bool path2 = (down && left);
    if(path1 || path2){
        cout<<n+m-2<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
   }
    return 0;
}