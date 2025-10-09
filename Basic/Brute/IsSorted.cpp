#include <iostream>
using namespace std;

bool isSorted(vector <int> &arr){
    int n = arr.size();

    for(int i = 1; i < n; i++){
        if(arr[i - 1] > arr[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = { 10, 20, 30, 40, 50 };
    cout << (isSorted(arr) ? "true\n" : "false\n");
    return 0;
}