#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution{
	public:
		vector <vector<int>> fourSum(vector <int> &arr, int target){
		
		int n = arr.size();
		
		set <vector <int>> st;

        vector <vector<int>> ans;
		
			for(int i = 0; i < n; i++){
				for(int j = i + 1; j < n; j++){
					for(int k = j + 1; k < n; k++){
						for(int l = k + 1; l < n; l++){
							if(arr[i] + arr[j] + arr[k] + arr[l] == target){
								vector <int> temp = {arr[i],arr[j], arr[k], arr[l]};
								st.insert(temp);
							}
						}
					}
				}
			}
			
			return vector<vector<int>>(st.begin(), st.end());
		}
};

int main() {
    // Input array
    vector<int> arr = {10, 2, 3, 4, 5, 7, 8};
    // Target sum
    int target = 23;

    // Create object
    Solution obj;
    // Get all quadruplets
    vector<vector<int>> ans = obj.fourSum(arr, target);

    // Print result
    for (auto quad : ans) {
        for (int num : quad) cout << num << " ";
        cout << endl;
    }
    return 0;
}