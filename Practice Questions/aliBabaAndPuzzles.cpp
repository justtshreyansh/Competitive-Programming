#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    long long d;
    cin>>a>>b>>c>>d;
    if(a+b-c==d){
        cout<<"YES";
    }
    else if(a+b*c==d){
        cout<<"YES";
    }
    else if(a-b+c==d){
        cout<<"YES";
    }
    else if(a-b*c==d){
        cout<<"YES";
    }
    else if(a*b+c==d){
        cout<<"YES";
    }
    else if(a*b-c==d){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0 ;
}