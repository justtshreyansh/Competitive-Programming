#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count1 =0;
    int count2=0;
    int count3=0;
    int count4=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)count1++;
        else if(arr[i]==2) count2++;
        else if(arr[i]==3) count3++;
        else count4++;
    }
    int ans =0;
    ans+=count4;
    if(count3>=count1){
        ans+=count3;
    }
    ans+=count2;
    cout<<ans<<endl;
    return 0;
}