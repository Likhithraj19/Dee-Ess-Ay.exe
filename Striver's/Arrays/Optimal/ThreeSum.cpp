#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution{
	public:
		vector <vector<int>> threeSum(vector <int> &arr, int n){
		
			vector <vector <int>> res;
			sort(arr.begin(), arr.end());
		
			for(int i = 0; i < n; i++){
				if(i > 0 && arr[i] == arr[i - 1]) continue;
				
				int j = i + 1;
				int k = n - 1;
				
				while(j < k){
					int sum = arr[i] + arr[j] + arr[k];
					
					if(sum < 0){
						j++;
					}
					else if(sum > 0){
						k--;
					}
					else {
						//vector <int> temp = {arr[i], arr[j], arr[k]};
						//res.push_back(temp);
						res.push_back({arr[i], arr[j], arr[k]});
						j++;
						k--;
						while(j < k && arr[j] == arr[j - 1]) j++;
						while(j < k && arr[k] == arr[k + 1]) k--;
					}
				}
			}
			
			return res;
			
		}
};

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    Solution obj;
    vector<vector<int>> res = obj.threeSum(arr, n);

    for (auto &triplet : res) {
        for (auto &num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
}