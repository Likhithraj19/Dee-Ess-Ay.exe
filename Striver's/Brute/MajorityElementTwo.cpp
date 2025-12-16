#include <iostream>
#include <vector>

using namespace std;

class Solution{
	public: 
		vector <int> majorityElementTwo(vector <int> &arr){
			int n = arr.size();
				
			vector <int> temp;
			
			for(int i = 0; i < n; i++){
				if(temp.size() == 0 || temp[0] != arr[i]){
					int count = 0;
					
					for(int j = 0; j < n; j++){
						if(arr[j] == arr[i]){
							count++;
						}
					}
					
					if(count > n/3){
						temp.push_back(arr[i]);
					}
				}
			if(temp.size() == 2) break;
			}
			return temp;
		}
};

int main() {
    vector<int> arr = {1,1,1,5,5,2,2,7};
    
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