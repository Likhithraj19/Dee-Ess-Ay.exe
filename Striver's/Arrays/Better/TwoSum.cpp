#include <iostream>
#include <vector>
#include <map>
using namespace std;

pair <int, int> twoSum(vector <int> &arr, int target){
    int n = arr.size();
    map <int, int> mpp;

    for(int i = 0; i < n; i++){
        int a = arr[i];
        int more = target - a;

        if(mpp.find(more) != mpp.end()){
            return {mpp[more], i};
        }

        mpp[a] = i;
    }

    return {-1,-1};
    
}

int main(){

    vector <int> arr = {2,6,5,8,11};
    int target = 14;

    pair <int,int> res = twoSum(arr,target);

    if(res.first != -1){
        cout << "The indices are: " << res.first << " and " << res.second << endl;
    }else{
        cout << "Not found" << endl;
    }

    return 0;
}