#include<bits/stdc++.h>

using namespace std;


// top element will me maximum -- max heap

int main (){
    priority_queue<int>maxi; // this will show the greatest elemnt every time 
    //min heap
    priority_queue<int ,vector<int>,greater<int>> mini;
    maxi.push(1);
     maxi.push(2);
      maxi.push(3);
       maxi.push(0);

    maxi.size();
    maxi.top();//it will give minimum element
    maxi.pop();   

    maxi.empty();
    
    


}