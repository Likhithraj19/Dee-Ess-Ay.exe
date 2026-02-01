#include <iostream> 
using namespace std;

int longestConsecutive(vector <int> &arr){
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int count = 0;
    int lastSmaller = INT_MIN;
    int longest = 1;

    for(int i = 0; i < n; i++){
        if(arr[i] - 1 == lastSmaller){
            count += 1;
            lastSmaller = arr[i];
        }else if(arr[i] != lastSmaller){
            count = 1;
            lastSmaller = arr[i];
        }

        longest = max(longest, count);
    }

    return longest;
}

int main() {
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    cout << longestConsecutive(arr) << endl;;
    return 0;
}