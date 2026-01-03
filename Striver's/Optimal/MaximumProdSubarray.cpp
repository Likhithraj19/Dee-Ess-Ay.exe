#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int maxProduct(vector <int> &arr){
            int n = arr.size();
			
			int prefix = 1;
			int suffix = 1;
			int ans = INT_MIN;
			
			for(int i = 0; i < n; i++){
				if(prefix == 0){
					prefix = 1;
				}
				else if(suffix == 0){
					suffix = 1;
				}
				
				prefix = prefix * arr[i];
				suffix = suffix * arr[n - i - 1];
				ans = max(ans, max(prefix, suffix));
			}
			
			return ans;
        }
};


int main() {
    // Sample input
    vector<int> nums = {2,3,-2,4};

    // Create Solution object
    Solution sol;

    // Print the result
    cout << sol.maxProduct(nums);

    return 0;
}