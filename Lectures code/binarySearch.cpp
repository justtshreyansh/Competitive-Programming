#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    for(int i=0;i<10;i++){
        arr.push_back(i+1);
    }
    vector<int> v{ 10, 20, 30, 30, 30, 40, 50 }; 
    if(binary_search(arr.begin(),arr.end(),3)){
        cout<<"Element is present in the array"<<endl;
    }
    else{
        cout<<"Element is not present in the array"<<endl;
    }
    auto  it = lower_bound(v.begin(),v.end(),30); //lower bound return iterator to first element which is greater than or equal to the target.
    cout<<it-v.begin()<<endl;
    auto upper = upper_bound(v.begin(),v.end(),30);//upper bound return iterator to first element which is greater than the target.
    cout<<upper-v.begin()<<endl;
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    auto sorted_data= st.lower_bound(4);
    cout<<*sorted_data<<endl;
    cout<<"Printing the array:"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}