#include <bits/stdc++.h>
// to find out tha no of time a given no appreared in the array

using namespace std;
 int main (){
    int n;
    int size;
    cout<<"enter the size of the vector"<<"\n";
    cin>>size;
 vector<int >arr(size) ;
 cout<<"enter the value of array"<<"\n";
 for ( int i = 0; i <  size;i++){
    cin>>arr[i];
 }
// vector<int >arr2 ;
// cout<<"enter the no to be found in the array";
//  for ( int i = 0; i <  arr.size();i++){
//     cin>>arr[i];
//  }
cout<<"enter the no to be found";
cin>>n;
 int count=0;
//  for ( int i= 0; i< arr2.size();i++){
    for ( int j =0; j<arr.size();j++){
        if(arr[j]==n)
        count++;
    
 }
printf("the no of time %d appered in the array is %d", n , count);

 
  
    // Vector = dynamic array (can grow/shrink automatically)
    vector<int> v = {1, 2, 3};

    // Adding elements
    v.push_back(4);      // add at end
    v.emplace_back(5);   // faster insertion

    // Accessing elements (O(1) random access)
    cout << v[0] << endl;     // direct access
    cout << v.at(1) << endl;  // safe access

    // Size and capacity
    cout << v.size() << endl;      // number of elements
    cout << v.capacity() << endl;  // allocated memory

    // First and last element
    cout << v.front() << endl;
    cout << v.back() << endl;

    // Traversing vector
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Removing element
    v.pop_back();   // removes last element

    // Insert and erase
    v.insert(v.begin() + 1, 100);  // insert at index 1
    v.erase(v.begin() + 2);        // remove element at index 2

    // Clear all elements
    v.clear();

    return 0;
}
