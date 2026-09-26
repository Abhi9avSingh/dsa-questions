#include <bits/stdc++.h>

using namespace std;

// store in key value pairs
//ssame key 2 value ko point nhi kregi 
// different keys can point towards same key 

int main ( ){

    map<int,string>m;
    m[1]="abhi";
    m[12]="name";
    m[3]="new";
    m.insert({5,"sdhkoe"});
    //gives in sorted order
    for ( auto i:m){
        cout<<i.first<<i.second;
    }
    m.count(12); // will return true 
    m.erase(12);

}