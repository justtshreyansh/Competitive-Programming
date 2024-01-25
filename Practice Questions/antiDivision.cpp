#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    
    long long ans1 = (b/c) -(a-1)/c;
    long long ans2 = (b/d) - (a-1)/d;
    long long common = (c*d)/gcd(c,d);
    long long remove = (b/common) - ((a-1)/common);
    long long n = b-a+1;
    cout<<n-(ans1+ans2)+remove<<endl;
    
    return 0;
}