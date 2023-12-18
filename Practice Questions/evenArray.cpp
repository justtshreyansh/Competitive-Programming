#include<iostream>
using namespace std;
int  main(){
    int t,n;
    cin>>t;
    
    while(t--){
        cin>>n;
        int arr[100];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int fine = 0;
        int even = 0;
        int odd = 0;

        for(int i=0;i<n;i++){
            if(i%2==0){
                if(arr[i]%2==0){
                    fine++;
                }
                else{
                    even++;
                }
            }
            else {
                if(arr[i]%2==1){
                    fine++;
                }
                else{
                    odd++;
                }
            }
        }
        if(fine==n){
            cout<<0<<endl;
        }
        else if(odd==even){
            cout<<odd<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}