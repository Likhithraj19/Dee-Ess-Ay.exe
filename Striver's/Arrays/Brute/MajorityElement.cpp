#include <iostream>
using namespace std;

int majorityElement(vector <int> &arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }

        if(count > n/2){
            return arr[i];
        }
    }

    return -1;
}

int main(){

    vector <int> arr = {2,2,3,1,3,2,2};
    int res = majorityElement(arr);

    cout << "The majority element is: " << res << endl;

    return 0;
}