#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even = 0;
    int odd = 0;
    int negative = 0;
    int positive = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
            if(arr[i]>0){
                positive++;
            }
            else if(arr[i]<0){
                negative++;
            }
        }
        else{
            odd++;
             if(arr[i]>0){
                positive++;
            }
            else if(arr[i]<0){
                negative++;
            }
        }
    }

    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;

    return 0;
}