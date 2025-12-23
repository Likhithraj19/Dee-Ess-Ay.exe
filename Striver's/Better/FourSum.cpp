#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution{
	public:
		vector <vector<int>> fourSum(vector <int> &arr, int target){
			int n = arr.size();
			
			set <vector<int>> ans;
						
			for(int i = 0; i < n; i++){
				for(int j = i + 1; j < n; j++){
					set <long long> hashSet;
					for(int k = j + 1; k < n; k++){
                        long long sum = arr[i] + arr[j];
                        sum += arr[k];
						long long fourth = target - (sum);
						
						if(hashSet.find(fourth) != hashSet.end()){
							vector <int> temp = {arr[i], arr[j], arr[k], (int)fourth};
							sort(temp.begin(),temp.end());
							ans.insert(temp);
						}
						
						hashSet.insert(arr[k]);
					}
				}
			}
			
			return vector <vector<int>> (ans.begin(), ans.end());
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