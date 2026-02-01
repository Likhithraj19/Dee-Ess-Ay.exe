#include <iostream>
#include <vector>
using namespace std;

// function to find the suffix sum array
vector<int> suffSum(vector<int> &arr) {
    int n = arr.size();

    vector <int> res(n);
	
	res[n - 1] = arr[n - 1];
	
	for(int i = n - 2; i >= 0; i--){
		res[i] = res[i + 1] + arr[i];
	}
	
	return res;
}

int main() {
    vector<int> arr = {15, 10, 25, 5, 10, 20 };
    vector<int> suffixSum = suffSum(arr);
    for(auto i: suffixSum) {
        cout << i << " " ;
    }
    return 0;
}