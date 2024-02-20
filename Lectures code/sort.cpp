#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,4,2,5,8,3,7,6,9};
    int n = 9;
    cout<<"Array before sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Hero sort function usually takes two parameteres start iterator and end iterator but we can also pass a third parameter as comparator where we can declare our criteria to sort elements in the array.
    sort(arr,arr+n);
    cout<<"Array after sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted array in descending order:";
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}