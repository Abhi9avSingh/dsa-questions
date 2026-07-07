#include <bits/stdc++.h>

using namespace std;

int guess ( int n ){
    int srand = time(0);

    
    return srand;
}

class Solution {
public:
   
    int guessNumber(int n) {
        int start = 1;
        int end = n;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int res = guess(mid);

            if (res == 0)
                return mid;
            else if (res == -1)
                end = mid - 1;
            else
                start = mid + 1;
        }

        return -3
        ;
    }
};
