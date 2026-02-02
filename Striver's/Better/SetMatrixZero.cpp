#include <iostream>
#include <vector> 

using namespace std;

void setMatrixZeroes(vector <vector <int>> &arr){
	int n = arr.size();
    int m = arr[0].size();
	
	vector <int> rows(n,0);
	vector <int> cols(m,0);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] == 0){
				rows[i] = 1;
				cols[j] = 1;
			}
		}
	}
	
	for(int i = 0; i < rows.size(); i++){
		for(int j = 0; j < cols.size(); j++){
			if(rows[i] || cols[j] == 1){
				arr[i][j] = 0;
			}
		}
	}	
}


int main() {
    vector<vector<int> > mat = { { 1, 1, 1, 1 },
                                 { 1, 0, 1, 1 },
                                 { 1, 1, 0, 1 },
                                 { 1, 0, 0, 1 }
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