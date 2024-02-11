#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> matrix =  {{3,-1},{5,2}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> ans;

    for(int i=0;i<n;i++){
        int maxi = INT_MIN;
            for(int j=0;j<m;j++){
                maxi = max(matrix[j][i],maxi);
            }
            ans.push_back(maxi);
            cout<<endl;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==-1){
                matrix[i][j] = ans[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}