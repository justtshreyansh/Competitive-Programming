#include<bits/stdc++.h>
using namespace std;
int composite(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return n;
        }
    }
    return -1;
}
int main(){
    
    int n;
    cin>>n;
    int i=2;
    bool flag = true;
    while(flag){
        
        int a = composite(i);
        if(a!=-1){
            int j=2;
            while(flag){
                int b = composite(j);
                if(b!=-1){
                    if(a-b==n){
                        cout<<a<<" "<<b<<endl;
                        flag = false;  
                    }
                }
            j++;
        }
        }
       i++; 
    }
    return 0;
}

// void func(int n){
//     int i=1;
//     bool flag = false;
//     while(true){
//         i++;
//         int a = composite(i);
//         if(a!=-1){
//             int j=1;
//             while(true){
//                 j++;
//                 int b = composite(j);
//                 if(b!=-1){
//                     if(a-b==n){
//                         cout<<a<<" "<<b<<endl;
//                         flag = true;
//                     }
//                 }
//                 if(flag) break;
//             }
//         }
//         if(flag) break;
//     }
// }