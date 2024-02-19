#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //check if occurence of ab and ba is present or not
    //store the index of both b
    int firstB = 0;
    int secondB = 0;
    int firstA = 0;
    int secondA = 0;
     int firstB2 = 0;
    int secondB2 = 0;
    int firstA2 = 0;
    int secondA2 = 0;
    
    bool first = false;
    bool second = false;
    for(int i=1;i<s.size();i++){
        if(s[i-1]=='A' && s[i]=='B'){
            first = true;
            firstB = i;
            firstA = i-1;
            break;
            
        }
    }
    for(int i=s.size()-1;i>=1;i--){
        if(s[i-1]=='B' && s[i]=='A'){
            second = true;
            secondB = i-1;
            secondA = i;
            break;
           
        }
    }
    for(int i=s.size()-1;i>=1;i--){
        if(s[i-1]=='A' && s[i]=='B'){
            first = true;
            firstB2 = i;
            firstA2 = i-1;
            break;
            
        }
    }
    for(int i=1;i<s.size();i++){
        if(s[i-1]=='B' && s[i]=='A'){
            second = true;
            secondB2 = i-1;
            secondA2 = i;
            break;
           
        }
    }
    //if occurence is false then answer is false
    if(first && second){
        if((secondB!=firstB && firstA!=secondA) ||( secondB2!=firstB2 && firstA2!=secondA2)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}