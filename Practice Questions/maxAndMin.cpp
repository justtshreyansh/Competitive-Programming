#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int mini = 0;
    int maxi = 0;
    if(a>=b && a>=c){
        maxi = a;
    }
    else if(b>=a && b>=c){
        maxi = b;
    }
    else{
        maxi = c;
    }
    if(a<=b && a<=c){
        mini = a;
    }
    else if(b<=a && b<=c){
        mini = b;
    }
    else{
        mini = c;
    }
    cout<<mini<<" "<<maxi;
    return 0;
}