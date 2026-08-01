#include<bits/stdc++.h>

using namespace std;
bool isPerfectSquare(int num) {

    if (num == 0 || num == 1)
        return true;

    int start = 1;
    int end = num;

    while (start <= end) {

        int mid = start + (end - start) / 2;
        long long square = 1LL * mid * mid;

        if (square == num)
            return true;

        else if (square > num)
            end = mid - 1;

        else
            start = mid + 1;
    }

    return false;
}