#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string original = s;
        reverse(s.begin(),s.end());
        bool flag = false;
        int low = 0;
        int high = s.size()-1;
        while(low<=high){
            if(original[low]>original[high]){
                flag = true;
                break;
            }
            else if(original[low]<original[high]){
                flag = false;
                break;
            }
            else{
                low++;
                high--;
            }
        }
        if(flag){
            s+=original;
            cout<<s<<endl;
            
        }
        else{
            cout<<original<<endl;
        }
        

    }
    return 0;
}