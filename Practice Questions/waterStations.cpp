#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%5>=3){
        while(n%5!=0){
            n++;
        }
    }
    else{
        while(n%5!=0){
            n--;
        }
    }
    cout<<n<<endl;
    return 0;
}