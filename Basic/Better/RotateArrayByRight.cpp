#include <iostream>
using namespace std;

void rotateArr(vector <int> &arr, int d){
    // int n = arr.size();
        
    // d = d % n;
    // vector <int> temp(n);
    
    // for(int i = 0; i <= d; i++){
    //     temp[i] = arr[n - d + i - 1];
    // }
    
    // for(int i = 0; i < n - d - 1; i++){
    //     temp[i + d + 1] = arr[i];
    // }
    
    // for(int i = 0; i < n; i++){
    //     arr[i] = temp[i];
    // }

    int n = arr.size();
        
        d = d % n;
        vector <int> temp(n);
        
        for(int i = 0; i < d; i++){
            temp[i] = arr[n - d + i];
        }
        
        for(int i = 0; i < n - d; i++){
            temp[i + d] = arr[i];
        }
        
        for(int i = 0; i < n; i++){
            arr[i] = temp[i];
        }
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;

    rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}