#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i = 0;
        int n = customers.size();
        int sum = 0;
        int ans = 0;
        int x = 0;
        while (i < n) {
            if (grumpy[i] != 1) {
                sum += customers[i];
            }
            i++;
        }
        for (int j = 0; j < minutes; j++) {
            if (grumpy[j] == 1) {
                ans += customers[j];
            }
        }
        x=ans;
        int j = minutes;
        while (j < n) {
            if (grumpy[j] == 1) {
                ans += customers[j];
            }
            if (grumpy[j - minutes] == 1) {
                ans -= customers[j-minutes];
            }
            x = max(x, ans);
            j++;
        }
        sum += x;
        return sum;
    }
};