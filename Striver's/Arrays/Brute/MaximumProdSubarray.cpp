#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int maxProduct(vector <int> &arr){
            int n = arr.size();

            int maxi = INT_MIN;

            for(int i = 0; i < n; i++){
                int prod = 1;

                for(int j = i; j < n; j++){
                    prod = prod * arr[j];

                    maxi = max(maxi, prod);

                }
            }

            return maxi;
        }
};


int main() {
    // Sample input
    vector<int> nums = {-2, 6, -3, -10, 0, 2};

    // Create Solution object
    Solution sol;

    // Print the result
    cout << sol.maxProduct(nums);

    return 0;
}