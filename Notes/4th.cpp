#include <iostream>
#include <string>
#include <algorithm>

using namespace std;



int main() {
    string s = "00100";
    int k = 1;
    for(int i=0;i<s.size();i++){
        if(k>0){
            if(s[i]=='1'){
                s[i]='0';
                k--;
            }
        }
    }
    for(int i=0;i<s.size()-k;i++){
        cout<<s[i];
    }

    return 0;
}
