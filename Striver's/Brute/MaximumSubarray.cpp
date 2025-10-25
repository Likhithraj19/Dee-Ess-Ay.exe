#include <iostream>
using namespace std;

int maxSubarraySum(vector <int> &arr){
   int n = arr.size();

   int maxi = INT_MIN;

   for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
        int sum = 0;

        for(int k = i; k <= j; k++){
            sum += arr[k];
            maxi = max(maxi, sum);
        }
    }
   }
   return maxi;
}

int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr) << endl;
}