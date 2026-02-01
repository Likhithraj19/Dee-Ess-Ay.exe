#include <iostream>
#include <vector>
using namespace std;

// Class containing methods for array operations
class LowerBoundFinder {
public:
    // Function to find lower bound index
    int lowerBound(vector<int> arr, int n, int x) {
        int low = 0;
		int high = n - 1;
		
		int ans = n;
		
		while(low <= high){
			int mid = (low + high) / 2;
			
			if(arr[mid] >= x){
				ans = mid;
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		
		return ans;
    }
};

int main() {
    vector<int> arr = {2, 3, 7, 10, 11, 11, 25};
    int n = arr.size();  // Size of the array
    int x = 9;           // Target value

    LowerBoundFinder finder;                  // Create object
    int ind = finder.lowerBound(arr, n, x);   // Find lower bound index

    cout << "The lower bound is the index: " << ind << "\n";

    return 0;
}
