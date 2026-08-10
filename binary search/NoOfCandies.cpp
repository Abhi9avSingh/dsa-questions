#include<bits/stdc++.h>

using namespace std;
class Solution {
public:

    bool isPossible(vector<int>& candies, long long k, long long mid) {

        long long studentCount = 0;

        for (int i = 0; i < candies.size(); i++) {

            studentCount += candies[i] / mid;

            if (studentCount >= k) {
                return true;
            }
        }

        return false;
    }

    int maximumCandies(vector<int>& candies, long long k) {

        long long s = 1;
        long long e = *max_element(candies.begin(), candies.end());

        long long ans = 0;

        while (s <= e) {

            long long mid = s + (e - s) / 2;

            if (isPossible(candies, k, mid)) {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return ans;
    }
};
