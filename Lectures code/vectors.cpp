#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    for(int i=1;i<=17;i++){
        arr.push_back(i);
    }
    cout<<"Printing the vector using begin and end iterator:";
    for(auto i=arr.begin();i!=arr.end();i++){
            cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Printing the vector using rbegin and rend iterator:";
    for(auto i=arr.rbegin();i!=arr.rend();i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    //capacity of vector
    cout<<"Size:"<<arr.size()<<endl;
    cout<<"Max size:"<<arr.max_size()<<endl;
    cout<<"Capacity:"<<arr.capacity()<<endl;
    arr.resize(4);
    cout<<"Size after resizing:"<<arr.size()<<endl;

    //element access
    cout<<"at:"<<arr.at(3)<<endl;
    cout<<"front:"<<arr.front()<<endl;
    cout<<"back:"<<arr.back()<<endl;
    return 0;
}