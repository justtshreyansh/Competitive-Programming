#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            break;
        }

    }
    if(count){
        cout<<"HARD";
    }
    else {
        cout<<"EASY";
    }
    return 0;
}