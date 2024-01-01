#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int noodle[n];
    int days[m];
    for(int i=0;i<n;i++){
        cin>>noodle[i];
    }
    for(int i=0;i<m;i++){
        cin>>days[i];
    }
   
    bool ans = true;
    for(int i=0;i<m;i++){
        bool flag = false;
        for(int j=0;j<n;j++){
            if(noodle[j]==days[i]){
                noodle[j] = -1;
                flag = true;
                break;
            }

           
        }
        if(flag==false){
            ans =false;
                break;
            }
    }

    if(ans){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
 