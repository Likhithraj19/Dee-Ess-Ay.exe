#include <iostream>
using namespace std;

void reverseArray(vector <int> &arr){
    int n = arr.size();

    vector <int> res(n);

    for(int i = 0; i < n; i++){
        res[i] = arr[n - i - 1];
    }

    for(int i = 0; i < n; i++){
        arr[i] = res[i];
    }
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}