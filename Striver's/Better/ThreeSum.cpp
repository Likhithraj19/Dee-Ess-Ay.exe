#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution{
	public:
		vector <vector <int>> threeSum(vector <int> &arr, int n){
		
			set <vector<int>> result;
			
			for(int i = 0; i < n; i++){
				
				set <int> hashSet;
				
				for(int j = i + 1; j < n; j++){
						
					int third = -(arr[i] + arr[j]);
					
					if(hashSet.find(third) != hashSet.end()){
						vector <int> temp = {arr[i], arr[j], third};
						sort(temp.begin(), temp.end());
						result.insert(temp);
					}
					
					hashSet.insert(arr[j]);
				}
			}
			
			return vector <vector<int>> (result.begin(), result.end());
			
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