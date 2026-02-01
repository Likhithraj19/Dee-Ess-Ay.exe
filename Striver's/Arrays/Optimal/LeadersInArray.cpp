#include <iostream>
using namespace std;

vector<int> leaders(vector <int> &arr){
   int n = arr.size();
   int point = n - 1;
   int maxi = INT_MIN;

   vector <int> res;

   while(point >= 0){
    if(arr[point] > maxi){
        maxi = arr[point];
        res.push_back(arr[point]);
    }
    point--;
   }
   reverse(res.begin(), res.end());
   return res;
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