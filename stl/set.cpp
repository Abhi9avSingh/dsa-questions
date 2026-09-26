//stores unique elements 

#include <bits/stdc++.h>

using namespace std;

//implement by using bst
//gives in sorted order 
// unordered set is fast
int main ( ){
    set<int>s;
    s.begin();
    s.end();
    s.insert(3);
    s.insert(4);
    s.insert(3);
    s.insert(2);// O(logn)
    s.erase(s.begin());//erase at a point
    s.count(5);//tells weather element is present or not 
    set<int>::iterator itr =s.find(5);//give the pointe for ecample *itr



    
}