#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix(vector <vector <int>> &arr){
	int n = arr.size();
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			swap(arr[i][j], arr[j][i]);
		}
	}

    for(int i = 0; i < n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    rotateMatrix(mat);

    for (auto& row : mat) {
        for (int x : row) {
            cout << x << ' ';
        }
        cout << endl;
    }

    return 0;
}