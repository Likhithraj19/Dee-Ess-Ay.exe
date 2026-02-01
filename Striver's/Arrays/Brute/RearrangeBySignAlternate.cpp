#include <iostream>
using namespace std;

vector <int> rearrange(vector <int> &arr){
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

    if(positivePos.size() > negativePos.size()){
        for(int i = 0; i < negativePos.size(); i++){
            arr[2 * i] = positivePos[i];
            arr[2 * i + 1] = negativePos[i];
        }

        int index = negativePos.size() * 2;
        for(int i = negativePos.size(); i < positivePos.size(); i++){
            arr[index] = positivePos[i];
            index++;
        }
    }
    else{
        for(int i = 0; i < positivePos.size(); i++){
            arr[2 * i] = positivePos[i];
            arr[2 * i + 1] = negativePos[i];
        }

        int index = positivePos.size() * 2;
        for(int i = positivePos.size(); i < negativePos.size(); i++){
            arr[index] = negativePos[i];
            index++;
        }
    }
    return arr;

}

int main() {
    vector<int> arr = {1, 2, -4, -5, 3, 6};

    vector<int> ans = rearrange(arr);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
  
    return 0;
}