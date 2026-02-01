#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution{
	public: 
		vector <int> majorityElementTwo(vector <int> &arr){
			int n = arr.size();
			
			map <int, int> mpp;
			
			vector <int> temp;
			
			for(int i = 0; i < n; i++){
				mpp[arr[i]]++;
			}
			
			for(auto it : mpp){
				if(it.second > n/3){
					temp.push_back(it.first);
				}
			}
			
			return temp;
		}
};

int main() {
    vector<int> arr = {1,1,1,2,2,4,5,6};
    
    // Create an instance of Solution class
    Solution sol;

    vector<int> ans = sol.majorityElementTwo(arr);
    
    // Print the majority elements found
    cout << "The majority elements are: ";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}
