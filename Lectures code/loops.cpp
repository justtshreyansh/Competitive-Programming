#include<iostream>
using namespace std;
int main(){
    {
        for(int i=0;i<5;i++){ //declaration , condition check and increment
            cout<<i<<" ";
        }
    }
    cout<<endl;
    {
        int t=5;
        int i = 0;//declartion
        while(t--){ //condition code and increment 
            cout<<i<<" ";
            i++;
        }
        cout<<endl;
    }
    {
        int x;
        do{
            cin>>x;
            cout<<x<<" ";
        }
        while(x!=0);
    }
    return 0;
}