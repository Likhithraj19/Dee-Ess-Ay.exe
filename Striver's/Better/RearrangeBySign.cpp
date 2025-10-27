#include <iostream>
using namespace std;

vector <int> rearrange(vector <int> &arr){
    int n = arr.size();
    int positive = 0;
    int negative = 1;
    vector <int> temp(n);

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            temp[positive] = arr[i];
            positive += 2;
        }else{
            temp[negative] = arr[i];
            negative += 2;
        }
    }

    return temp;

}

int main() {
    vector<int> arr = {3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrange(arr);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
  
    return 0;
}