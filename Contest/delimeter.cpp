#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    while(true){
        int data;
        cin>>data;
        if(data!=0){
            arr.push_back(data);
        }
        else{
            break;
        }
    }
    reverse(arr.begin(),arr.end());
    cout<<0<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}