#include <bits/stdc++.h>

using namespace std;

int upperBound(vector<int> arr, int n, int x){
	int low = 0;
	int high = n-1;
	
	int ans = n;
	
	while(low <= high){
		int mid = (low + high)/2;
		
		if(arr[mid] > x){
			ans = mid;
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	
	return ans;
}

int lowerBound(vector<int> arr, int n, int x){
	int low = 0;
	int high = n-1;
	
	int ans = n;
	
	while(low <= high){
		int mid = (low + high)/2;
		
		if(arr[mid] >= x){
			ans = mid;
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	
	return ans;
}

pair <int, int> solve(int n, int key, vector <int> &arr){
   int lb = lowerBound(arr, n, key);
   int ub = upperBound(arr, n, key);
   if(lb == n || arr[lb] != key) return {-1, -1};
   
   return {lb, ub - 1};
}

int main() {
    int n = 7;
    int key = 13;
    vector<int> v = {3, 4, 13, 13, 13, 20, 40};

    pair<int, int> ans = solve(n, key, v);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}