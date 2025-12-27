#include <iostream>
#include <vector>

using namespace std;

int maxLen(vector <int> &arr, int n){
	
	int maxi = 0;
	
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = i; j < n; j++){
			sum += arr[j];
			
			if(sum == 0){
				maxi = max(maxi, j - i + 1);
			}
		}
	}
	
	return maxi;
}

int main() {
  // sample input
  vector <int> A = {9, -3, 3, -1, 6, -5};
  // compute size
  int n = A.size();
  // print result
  cout << maxLen(A, n) << endl;
  // exit
  return 0;
}