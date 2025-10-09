#include <iostream>
using namespace std;

int subArray(vector <int> &arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    cout << "All Non-empty Subarrays\n";
    subArray(arr);
    return 0;
}