#include <bits/stdc++.h>
using namespace std;
int longest(string &s){
    int curr =1;
    int maxLen =0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            curr++;
        }
        else{
            maxLen = max(curr,maxLen);
            curr = 1;
        }
        maxLen = max(curr,maxLen);
    }
    return maxLen;
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    string s;
	    cin>>s;
	    
	    while(q--){
	        cout<<longest(s)<<" ";
	        char ch;
	        cin>>ch;
	        s.push_back(ch);
	        
	            
	        
	    }
	    cout<<longest(s)<<" ";
	    cout<<endl;
	   
	    
	    
	}

}
