#include <iostream>
using namespace std;

vector<int> leaders(vector <int> &arr){
   int n = arr.size();
   vector <int> ans;

   int maxi = INT_MIN;

   for(int i = n - 1; i >= 0; i--){
    if(arr[i] > maxi){
        ans.push_back(arr[i]);
    }

    maxi = max(arr[i], maxi);
   }

   sort(ans.begin(), ans.end());
   return ans;
}

int main() {
    vector<int> arr = { 10,22,12,3,0,6 };
    vector<int> result = leaders(arr);
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}