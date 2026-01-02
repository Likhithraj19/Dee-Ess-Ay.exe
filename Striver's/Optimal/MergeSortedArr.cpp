#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
	public:
		void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
			int left = m - 1;
			int right = 0;
			
			while(left >= 0 && right < n){
				if(nums1[left] > nums2[right]){
					swap(nums1[left], nums2[right]);
                    left--;
                    right++;
				}
                else{
                    break;
                }
			}

            sort(nums1.begin(), nums1.end());
            sort(nums2.begin(), nums2.end());
		}
};

int main() {
    vector<int> nums1 = {1,3,5,7};
    vector<int> nums2 = {0,2,6,8,9};
    int m = 4, n = 5;

    Solution().merge(nums1, m, nums2, n);

    // Print merged array
    for (int num1 : nums1) cout << num1 << " ";
    for (int num2 : nums2) cout << num2 << " ";
    return 0;
}