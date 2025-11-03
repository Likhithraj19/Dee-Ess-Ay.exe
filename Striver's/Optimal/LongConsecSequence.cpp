#include <iostream> 
#include <unordered_set>
using namespace std;

int longestConsecutive(vector <int> &arr){
    int n = arr.size();

    if(n == 0) return 0;

    int longest = 1;

    unordered_set <int> st;

    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }

    for(auto it : st){
        if(st.find(it - 1) == st.end()){
            int count = 1;
            int x = it;

            while(st.find(x + 1) != st.end()){
                x = x + 1;
                count += 1;
            }

            longest = max(longest, count);
        }
    }

    return longest;

}

int main() {
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    cout << longestConsecutive(arr) << endl;;
    return 0;
}