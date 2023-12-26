#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    if(k<60){
        if(k<10){
            cout<<21<<":0"<<k;
        }
        else{
            cout<<21<<":"<<k;
        }
        
    }
    else{
        if(k<70){
            cout<<22<<":0"<<k-60;
        }
        else{
            cout<<22<<":"<<k-60;
        }
    }
}