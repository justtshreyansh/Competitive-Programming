#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> primes;
    for(int i=2;i<=n;i++){
        int count =0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                count++;
                if(i/j!=j) count++;
            }
        }
        if(count==2) primes.push_back(i);
    }
    int ans=0;
    int m = primes.size();
    for(int i=0;i<m-1;i++){
        int temp = primes[i]+primes[i+1]+1;
        bool flag = false;
        for(int j=0;j<m;j++){
            if(primes[j]==temp){
                flag = true;
                break;
            }
        }
        if(flag) ans++;
    }

    if(ans>=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}