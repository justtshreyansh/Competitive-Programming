#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    bool flag = true;
	    for(int i=0;i<n;i++){
	        if(arr[i]<=4){
	            flag = false;
	            break;
	        }
	    }
	    if(flag) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}
