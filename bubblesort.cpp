#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&arr){  
    for (int i = 0; i < arr.size()-1 ; i++) {
        for (int j = 0; j < arr.size() - i -1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for ( int i:arr){
        cout<<i<<" ";
    }
    
}
 
int main ( ){
    int n;
     cout << "Enter the number of elements: ";
    cin >> n;
    vector<int>arr;
    srand(time(0));
    // cout << "\nGenerated Array:\n";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        // cout << arr[i] << " ";
    }
    cout<<"bubble sort"<<"\n";
    bubblesort(arr);
    return 0;

}
