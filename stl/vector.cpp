#include<bits/stdc++.h>

using namespace std;

int main ( ){

    vector <int>v;


    vector<int>a(5,1);

    cout<<"print a"<<endl;
    for ( int i:a){
        cout<<i<<"";
    }

    v.push_back(1);
    cout<<"front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;


    
}