#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int count = 0;

        for (int i = 0; i < k; i++) {
            sum = sum + arr[i];
             
        }
        if (sum >= k * threshold)
            count++;

        for (int i = k; i < arr.size(); i++) {
            sum += arr[i];
            sum -= arr[i - k];
            if (sum >= k * threshold)
                count++;
        }
        return count;
    }
};