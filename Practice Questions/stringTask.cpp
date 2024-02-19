#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //convert all uppercase into lowercase
    for(int i=0;i<s.size();i++){
       int ch = s[i];
      if(ch>=65 && ch<=90){
            ch+=32;
      }
      s[i] = ch;
    }
    //remove all vowels
    string withoutVowels ="";
    for(int i=0;i<s.size();i++){
        if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')){
            withoutVowels+='.';
            withoutVowels+=s[i];
        }
    }
    cout<<withoutVowels<<endl;
    return 0;
}