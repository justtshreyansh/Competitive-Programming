#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> mpp;
    //Map is a associative container which stores a key and a value where no two same values has the same key.
    mpp[0] = 10;
    mpp[1] = 20;
    mpp[2] = 30;
    mpp.insert(pair<int,int> (3,40));
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    auto it = mpp.begin();
    cout<<"First element is:"<<it->first<<" "<<it->second<<endl;
    auto last = mpp.rbegin() ;
    cout<<"Last element is:"<<last->first<<" "<<last->second<<endl;
    return 0;
}