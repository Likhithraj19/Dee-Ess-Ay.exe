#include <iostream> 
using namespace std;

bool linear_search(vector <int> &arr, int num){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            return true;
        }
    }

    return false;
}

int longestConsecutive(vector <int> &arr){
    int n = arr.size();

    int longest = 1;

    for(int i = 0; i < n; i++){
        int x = arr[i];
        int count = 1;

        while(linear_search(arr, x + 1) == true){
            x = x + 1;
            count = count + 1;
            longest = max(longest, count);
        }
    }

    return longest;
}

int main() {
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    cout << longestConsecutive(arr) << endl;;
    return 0;
}