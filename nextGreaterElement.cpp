  
        
 #include<bits/stdc++.h>

 using namespace std;
    int main (){
        int nums1,nums2=0;

        for (int i = 0; i <=   nums1.size()-1 ; i++) {
            int flag = 0;
            int a = find(nums2.begin(), nums2.end(), nums1[i]) - nums2.begin();
            for (int j = a ; j < nums2.size()  ; j++) {
                if (nums2[j] > nums1[i]) {
                    ans.push_back(nums2[j]);
                    flag++;
                    break;
                }
            }
            if (flag == 0) {
                ans.push_back(-1);
            }
        }
         return ans;
    }