#include <iostream>
#include <vector>
using namespace std;

// function to find the prefix sum array
vector<int> prefSum(vector<int> &arr) {
    int n = arr.size();
	
	vector <int> preSum(n);
	
	preSum[0] = arr[0];
	
	for(int i = 1; i < n; i++){
		preSum[i] = preSum[i - 1] + arr[i];
	}
	return preSum;
}

int main() {
    vector<int> arr = {10, 20, 10, 5, 15};
    vector<int> prefixSum = prefSum(arr);
    for(auto i: prefixSum) {
        cout << i << " " ;
    }
    return 0;
}