#include <iostream>
#include <vector>
#include <map>
using namespace std;

string twoSum(vector <int> &arr, int target){
    int n = arr.size();

    int left = 0;
    int right = n - 1;

    sort(arr.begin(), arr.end());

    while(left < right){
        int sum = arr[left] + arr[right];
        if( sum == target){
            return "YES";
        }
        else if(sum < target) left++;
        else right--;
    }

    return "NO";
}

int main(){

    vector <int> arr = {2,6,5,8,11};
    int target = 14;

    string res = twoSum(arr,target);

    cout << res << endl;

    return 0;
}