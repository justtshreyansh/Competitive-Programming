#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int mat[50][50];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
   

    set<int> st;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            st.insert(mat[i][j]);
        }
    }
    int count = 0;

    for(auto x:st){ 
        for(auto y:st){
            if(x==y) continue;
            bool flag = false;
            for(int i=0;i<m;i++){
                for(int j=0;j<n-1;j++){
                    if(mat[i][j]==x){
                        if(mat[i][j+1]==y){
                            flag = true;
                        }
                    }
                }
            }
            if(flag==false){
                count++;
            }
            
        }
    }
    cout<<count/2<<endl;
    return 0;
}