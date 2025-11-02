#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

vector<int> leaders(vector <int> &arr){
   int n = arr.size();
   vector <int> res;

   for(int i = 0; i < n; i++){
    bool isLeader = true;
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                isLeader = false;
                break;
            }
        }

        if(isLeader == true){
            res.push_back(arr[i]);
        }
   }
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