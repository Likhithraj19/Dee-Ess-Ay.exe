#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int removeDuplicates(vector <int> &arr){
   int n = arr.size();

   unordered_set <int> s;
   int idx = 0;

   for(int i = 0; i < n; i++){
    if(s.find(arr[i]) == s.end()){
        s.insert(arr[i]);
        arr[idx] = arr[i];
        idx+= 1;
    }
   }

   return s.size();

}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int newSize = removeDuplicates(arr);
    for (int i = 0; i < newSize; i++) 
        cout << arr[i] << " ";
    return 0;
}