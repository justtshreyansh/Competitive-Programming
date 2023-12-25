#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[14];
    for(int i=0;i<14;i++){
        arr[i]=0;
    }
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        arr[n]++;
    }
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<14;i++){
        if(arr[i]==2){
            count1 = 1;
        }
        if(arr[i]==3){
            count2=1;
        }
    }
    if(count1 && count2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}