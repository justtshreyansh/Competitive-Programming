#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int times = 22;
	    int maxi = INT_MIN;
	    int mom = 0;
	    int count =0;
	    while(times--){
	        int runs,wickets;
	        cin>>runs>>wickets;
	        count++;
	        int score = runs*1 + (wickets*20);
	        if(score>maxi){
	            maxi = score;
	            mom = count;
	        }
	        
	        
	    }
	    cout<<mom<<endl;
	}

}
