#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution{
	public:
		vector <int> majorityElementTwo(vector <int> &arr){
			int n = arr.size();
			
			int count1 = 0, count2 = 0;
			int ele1 = INT_MIN, ele2 = INT_MIN; 
			
			for(int i = 0; i < n; i++){
				if(count1 == 0 && ele2 != arr[i]){
					count1 = 1;
					ele1 = arr[i];
				}
				else if(count2 == 0 && ele1 != arr[i]){
					count2 = 1;
					ele2 = arr[i];
				}
				else if(arr[i] == ele1){
					count1++;
				}
				else if(arr[i] == ele2){
					count2++;
				}
				else{
					count1--;
					count2--;
				}
			}
			
			//to check whether it is majority or not
			
			vector <int> res;
			
			count1 = 0, count2 = 0;
			
			for(int i = 0; i < n; i++){
				if(ele1 == arr[i]) count1++;
				if(ele2 == arr[i]) count2++;
			}
			
			int mini = n/3;
			
			if(count1 >= mini) res.push_back(ele1);
			if(count2 >= mini) res.push_back(ele2);
			sort(res.begin(), res.end());
			return res;
		}
};

int main() {
    vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    
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