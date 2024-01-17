#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l,r,k;
        cin>>l>>r>>k;
        bool run = true;
        long long oddTotal = r-l+1;
        if(l==r) {
            if(l==1) cout<<"NO"<<endl;   // 4 5  total =2; odd = 2 
            else{    
                cout<<"YES"<<endl;
            }
            run = false;
        }
        else{
            if(oddTotal%2==1){
                oddTotal/=2;
                if(l%2==1 || r%2==1){
                    oddTotal++;
                }

            }
            else{
                oddTotal/=2;
            }
        }
        if(run){
            if(oddTotal<=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
        

    }
    return 0;
}