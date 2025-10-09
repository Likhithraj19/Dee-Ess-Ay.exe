#include <iostream>
using namespace std;

vector<int> leaders(vector <int> &arr){
    vector <int> res;
    int n = arr.size();

    for(int i = 0; i < n; i++){
        int flag = 0;
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            res.push_back(arr[i]);
        }
    }
    return res;
}

int main() {
    vector<int> arr = { 16, 17, 4, 3, 5, 2 };
    vector<int> result = leaders(arr);
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}