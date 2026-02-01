#include <iostream> 
using namespace std;

int longestConsecutive(vector <int> &arr){
    int n = arr.size();
    int longest = 1;
    int count = 1;

    sort(arr.begin(), arr.end());

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1] + 1){
            count++;
        }
        else if(arr[i] != arr[i - 1]){
            count = 1;
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