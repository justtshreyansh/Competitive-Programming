#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x,y;
    cin>>x>>y;
    int countx =0;
    int county =0;
    for(int i=0;i<n;i++){
        if(arr[i]==x) countx++;
        if(arr[i]==y) county++;
    }
    if(countx>county){
        cout<< x;
    }
    else if(countx<county){
        cout<< y;
    }
    else{
        if(x>y){
            cout<< y;
        }
        else{
            cout<< x;
        }
    }
    return 0;
}