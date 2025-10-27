#include <iostream>
using namespace std;

void rearrange(vector <int> &arr){
    int n = arr.size();
    vector <int> positivePos;
    vector <int> negativePos;

    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            positivePos.push_back(arr[i]);
        }
        else{
            negativePos.push_back(arr[i]);
        }
    }

    for(int i = 0; i < n/2; i++){
        arr[2 * i] = positivePos[i];
        arr[(2 * i) + 1] = negativePos[i];
    }

}

int main() {
    vector<int> arr = {3, 1, -2, -5, 2, -4};

    rearrange(arr);
	for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
  
    return 0;
}