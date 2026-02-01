#include <iostream>
#include <vector>

using namespace std;

void markRows(int i, int m, vector<vector<int>> &arr){ 
	for(int j = 0; j < m; j++){
		if(arr[i][j] != 0){
			arr[i][j] = -1;
		}
	}
}

void markCols(int j, int n, vector<vector<int>> &arr ){
	for(int i = 0; i < n; i++){
		if(arr[i][j] != 0){
			arr[i][j] = -1;
		}
	}
}

void setMatrixZeroes(vector<vector<int>> &arr ){
	int n = arr.size();
	int m = arr[0].size();
	
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			if(arr[i][j] == 0){
				markRows(i, m, arr);
				markCols(j, n, arr);
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] == -1){
				arr[i][j] = 0;
			}
		}
	}
}

int main() {
    vector<vector<int> > mat = { { 1, 1, 1, 1 },
                                 { 1, 0, 0, 1 },
                                 { 1, 1, 0, 1 },
								 { 1, 1, 1, 1 }
								 };

    setMatrixZeroes(mat);
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}