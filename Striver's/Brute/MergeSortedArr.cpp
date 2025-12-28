#include <iostream>
#include <vector>

using namespace std;

class Solution{
	public:
		void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
			vector <int> nums3;
			int left = 0;
			int right = 0;
			
			while(left < m && right < n){
				if(nums1[left] <= nums2[right]){
					nums3.push_back(nums1[left]);
					left++;
				}
				else{
					nums3.push_back(nums2[right]);
					right++;
				}
			}
			
			while(left < m){
				nums3.push_back(nums1[left]);
				left++;
			}
			
			while (right < n){
				nums3.push_back(nums2[right]);
				right++;
			}
			
			for(int i = 0; i < m + n; i++){
				if(i < m){
                    nums1[i] = nums3[i]; 
                }
                else {
                    nums2[i - m] = nums3[i];
                }
			}

            // for(int i = 0; i < m + n; i++){
            //     nums1[i] = nums3[i];
            // }
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