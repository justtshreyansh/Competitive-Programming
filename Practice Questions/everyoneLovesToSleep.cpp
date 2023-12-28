#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,m;
        cin>>n>>h>>m;
        int sleeptime = h*60+m;
        int ans = 1e7;
        for(int i=0;i<n;i++){
            int hour_i,min_i;
            cin>>hour_i>>min_i;
            int alarmtime = hour_i*60+min_i;
            int diff = alarmtime-sleeptime;
            if(diff<0) diff+=1440;
            ans = min(ans,diff);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }
    return 0;
}