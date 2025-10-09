#include <iostream>
using namespace std;

void reverseArray(vector <int> &arr){
    int n = arr.size();

    int leftPointer = 0;
    int rightPointer = n - 1;

    while(leftPointer < rightPointer){
        swap(arr[leftPointer], arr[rightPointer]);

        leftPointer++;

        rightPointer--;
    }
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}