#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> matrix;
        while(n--){
            string s;
            cin>>s;
            vector<int> temp;
            for(int i=0;i<s.size();i++){
                int ch = s[i]-'0';
                temp.push_back(ch);
            }
            matrix.push_back(temp);
        }
        vector<int> freq;
        for(int i=0;i<matrix.size();i++){
            int count =0;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1){
                    count++;
                }
            }
            if(count!=0) freq.push_back(count);
        }
        int first = freq[0];
        bool square = true;
        for(int i=0;i<freq.size();i++){
                if(freq[i]!=first){
                    square = false;
                }
        }
        if(square) cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
        
    }
    return 0;
}