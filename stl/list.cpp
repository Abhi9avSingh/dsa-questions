#include<bits/stdc++.h>

using namespace std;

int main (){
    // creating a list 

    list<int>l;

    //copying a list into another 

    list<int>l1(l);

    l.push_back(1);
    l.push_front(2);
    l.erase(l.begin());
    l.size();


    for ( int i :l){
        cout<<i<<"";
    }

}