#include <iostream>
#include <map>
using namespace std;

int majorityElement(vector <int> &arr){
    int n = arr.size();

    map <int, int> mpp;

    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        if(it.second > n/2){
            return it.first;
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