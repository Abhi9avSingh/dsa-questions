#include<bits/stdc++.h>

using namespace std;


 
    bool isPossible(vector<int>& weights, int days, int mid) {
        int countDays = 1;
        int CountSum = 0;
        for (int i = 0; i <= weights.size()-1; i++) {
            if (CountSum + weights[i] <= mid) {
                CountSum += weights[i];
            } else {
                countDays++;
                if (countDays > days || weights[i] > mid)
                    return false;
                    CountSum = weights[i];
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s = 0;
        int ans = 0;
        long long sum = 0;
        for (int i : weights) {
            sum += i;
        }
        int e = sum;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (isPossible(weights, days, mid)) {
                ans = mid;
                e = mid - 1;

            } else
                s = mid + 1;
        }
         
    }
 