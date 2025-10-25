#include <iostream>
using namespace std;

int maxSubarraySum(vector <int> &arr){
   int n = arr.size();

//    int maxi = INT_MIN;
//    int sum = 0;

//    for(int i = 0; i < n; i++){
//     sum += arr[i];

//     if(sum > maxi){
//         maxi = sum;
//     }

//     if(sum < 0){
//         sum = 0;
//     }

//     if(maxi < 0){
//         maxi = 0;
//     }
//    }

    int maxi = INT_MIN;
   int sum = 0;
   int ansStart = -1, ansEnd = -1;
   int start = 0;

   for(int i = 0; i < n; i++){
    if(sum == 0) start = i;
    sum += arr[i];

    if(sum > maxi){
        maxi = sum;
        ansStart = start;
        ansEnd = i;
    }

    if(sum < 0){
        sum = 0;
    }

    if(maxi < 0){
        maxi = 0;
    }
   }

   return maxi;
}

int main() {
    // vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    vector<int> arr = {-3, -2, -5, -1};
    cout << maxSubarraySum(arr) << endl;
}