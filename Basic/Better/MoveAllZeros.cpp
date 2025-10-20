#include <iostream>
using namespace std;

void pushZerosToEnd(vector <int> &arr){
    int n = arr.size();

    int count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}