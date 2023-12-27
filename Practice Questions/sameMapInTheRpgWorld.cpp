#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,v;
    cin>>h>>v;
    int a[h][v],b[h][v];
    for(int i=0;i<h;i++){
        string s;
        cin>>s;
        for(int j=0;j<v;j++){
            if(s[j]=='.') a[i][j]=0;
            else a[i][j]=1;
        }
    }
    for(int i=0;i<h;i++){
        string s;
        cin>>s;
        for(int j=0;j<v;j++){
            if(s[j]=='.') b[i][j]=0;
            else b[i][j]=1;
        }
    }
    for(int s=0;s<h;s++){
        for(int t=0;t<v;t++){
            bool done  = true;
            for(int i=0;i<h;i++){
                for(int j=0;j<v;j++)
                if(a[i][j]!=b[(i+s)%h][(j+t)%v]){
                    done = false;
                    break;
                }
                if(!done) break;
            }
            if(done){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}