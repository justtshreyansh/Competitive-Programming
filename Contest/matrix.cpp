#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}