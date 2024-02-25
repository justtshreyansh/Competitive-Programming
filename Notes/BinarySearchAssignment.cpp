#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,3,3,3,3,3,3,4,5,6,7,8,9};
    int n = arr.size();
    int k = 2;
    //check whether the given integer exist in the array or not
    if(binary_search(arr.begin(),arr.end(),k)){
        cout<<"K is present in the array"<<endl;
    }
    else cout<<"K is not present in the array"<<endl;

    //First occurence of the number
    auto firstOccurence = lower_bound(arr.begin(),arr.end(),3);
    cout<<"First occurence of 3 is:"<<firstOccurence-arr.begin()<<endl;

    //last occurence of the number
    auto lastOccurence = upper_bound(arr.begin(),arr.end(),3);
    cout<<"Last occurence of 3 is:"<<lastOccurence-arr.begin()-1<<endl;

    //frequency of that element
    int frequency = lastOccurence - firstOccurence ;
    cout<<"Frequency of 3 is:"<<frequency<<endl;

    //index of its 6th occurence
    cout<<"Index of its 6th occurence is:"<<firstOccurence-arr.begin()+5<<endl;

    //index of its last 3rd occurence
    cout<<"Index of its last 3rd occurence is:"<<lastOccurence-arr.begin()-1-2<<endl;


    return 0;
}