#include<iostream>
#include<bits/stdc++.h>
#include<utility> // pair is simple container defined in this header file
using namespace std;
int main(){
    pair<int,char> p1;
    p1.first = 1;
    p1.second = 'a';
    cout<<p1.first<<" "<<p1.second<<endl;

    //we can also initialize a pair
    pair<int,char> p(2,'b');
    cout<<p.first<<" "<<p.second<<endl;

    //another way of initialising pair is by using make_pair function
    pair<string,int> makePair;
    makePair = make_pair("GeeksforGeeks",1);
    cout<<makePair.first<<" "<<makePair.second<<endl;

    //swap function is used to swap values of pair of same data type
    p1.swap(p);
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;

    //tie function 
    pair<int,char> pair4 = {1,'a'};
    cout<<pair4.first<<" "<<pair4.second<<endl;
    int x;
    char y;
    tie(x,y) = pair4;
    cout<<x<<" "<<y<<endl;


    return 0;
}