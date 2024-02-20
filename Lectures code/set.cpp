#include<bits/stdc++.h>
using namespace std;
int main(){
    //set are associative container which stores uniques value in sorted order
    set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(2);
    st.insert(2);
    cout<<"Set in ascending order:";
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    set<int,greater<int>> st1; // we can also pass comparator function instead of greater int
    st1.insert(1);
    st1.insert(3);
    st1.insert(2);
    st1.insert(2);
    cout<<"Set in descending order:";
    for(auto it:st1){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Size of the set:"<<st.size()<<endl;
    cout<<"Set is empty or not:"<<st.empty()<<endl;
    cout<<"First element of the set:"<<*st.begin()<<endl;
    cout<<"Last element of the set:"<<*st.end()<<endl;
    cout<<"Maximum size of the set:"<<st.max_size()<<endl;


    return 0;
}