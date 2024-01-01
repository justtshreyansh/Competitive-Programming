#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
   
    int x=0;
    int y=0;
    int dir=0;
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            dir = (dir+1)%4;
        }
        else{
            if(dir==0){
                x+=1;
            }
            else if(dir==1){
                y+=(-1);
            }
            else if(dir==2){
                x+=(-1);
            }
            else{
                y+=1;
            }
        }
    }
    cout<<x<<" "<<y;
    return 0;
}