#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> st;
    st.insert("Shreyansh");
    st.insert("Utkarsh");
    st.insert("Bhagwan");
    st.insert("Anupma");
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Size of the set:"<<st.size()<<endl;
    cout<<"Empty or not:"<<st.empty()<<endl;
    if(st.find("singh")==st.end()){
        cout<<"NOT FOUND"<<endl;
    }
    
    return 0;
}