#include <bits/stdc++.h>
using namespace std;

// Class to find the upper bound index in an array
class UpperBoundFinder {
public:
    int upperBound(vector<int> &arr, int x, int n) {
        int low = 0;
        int high = n - 1;
        
        int ans = n;
        
        while(low <= high){
        	int mid = (low + high)/2;
        	
        	if(arr[mid] > x){
        		high = mid - 1;
        		ans = mid;
        	} 
        	else {
        		low = mid + 1;
        	}
        }
        
        return ans;
    }
};

int main() {
    vector<int> arr = {2, 3, 7, 10, 11, 11, 25}; // Sorted input array
    int n = arr.size();                    // Size of the array
    int x = 11;                             // Target value

    UpperBoundFinder finder;              // Create object of class
    int ind = finder.upperBound(arr, x, n); // Call method

    cout << "The upper bound is the index: " << ind << "\n"; // Output result
    return 0;
}
