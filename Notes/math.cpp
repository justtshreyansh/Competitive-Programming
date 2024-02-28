#include<bits/stdc++.h>
using namespace std;
//Primality testing means checking whehter the number is prime or not;
void primalityTesting(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>2) cout<<"Not a prime number"<<endl;
    cout<<"Number of divisior:"<<count<<endl;
}
//square root n times is complexity
void primality(int n){
    int count =0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++; //i is a factor

            if(i!=n/i){
                count++; //n/i is also a factor is i and n/i is not equal
            }
        }

    }
    cout<<"Number of divisors of :  "<<n<<"  is "<<count<<endl;
}
//complexity of this technique is nlogn
void prime(int n){
    vector<int> div(n+1);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            div[j]++;// i is a divisor of j
        }
    }
    for(int i=1;i<=n;i++){
        cout<<div[i]<<endl;
    }
}
//sieve method -> almost linear complexity
void sieve(int n){
    vector<int> prime(n+1,1);
    prime[1] = 0;
    for(int i=2;i<=n;i++){
        if(!prime[i]){
            continue;
        }
        for(int j=2*i;j<=n;j+=i){
            prime[j] =0;
        }
    }
}
int main(){
    
    int n;
    cin>>n;
    primalityTesting(n);
    for(int i=1;i<=n;i++){
        primality(i);
    }


   
    
    

    
    return 0;
}