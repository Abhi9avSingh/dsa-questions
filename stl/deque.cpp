#include<bits/stdc++.h>

using namespace std;
// dynamic
//random excess possible 

int main (){
//creating 

deque<int>d;

d.push_back(1);
d.push_front(2);

// d.pop_front();

// for ( int i :d){
//     cout<<i<<"";
// }
cout<<"print first Index Element"<<d.at(1)<<endl;

cout<<"en=mpty or not "<<d.empty()<<endl;

//to delete elements
// for removing a elemnts from a limit 
d.erase(d.begin(),d.begin()+1);



}