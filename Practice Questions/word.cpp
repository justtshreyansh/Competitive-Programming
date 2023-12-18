#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int countLower = 0;
    int countUpper = 0;
    for(int i=0;i<str.length();i++){
        if(str[i]>=97 && str[i]<=122){
            countLower++;
        }
        else{
            countUpper++;
        }
    }
    if(countLower>=countUpper){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    cout<<str;
    return 0;
}