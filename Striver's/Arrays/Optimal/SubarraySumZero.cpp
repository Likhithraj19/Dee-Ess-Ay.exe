#include <iostream>
#include <vector>
#include <map>

using namespace std;

int maxLength(vector <int> &arr){
	int n = arr.size();

    int sum = 0;
    int maxi = 0;

    map <int, int> mpp;

    for(int i = 0; i < n; i++){
        sum += arr[i];

        if(sum == 0){
            maxi = max(maxi, i + 1);
        }
        else if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
        else {
            maxi = max(maxi, i - mpp[sum]);
        }
    }

    return maxi;
}

int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10};
    cout << maxLength(arr) << endl;
    return 0;
}