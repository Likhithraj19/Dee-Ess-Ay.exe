#include <iostream>
#include <vector>

using namespace std;

void setMatrixZeroes(vector <vector <int>> &arr){
	int n = arr.size();
    int m = arr[0].size();
	
	//arr[i][0] arr[0][j]
	
	int cols0 = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
			if(arr[i][j] == 0){
				arr[i][0] = 0;
				
				if(j != 0){
					arr[0][j] = 0;
				}
				else{
					cols0 = 0;
				}
			}
		}
    }
	
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++ ){
			if(arr[i][j] != 0){
				if(arr[i][0] == 0 || arr[0][j] == 0){
					arr[i][j] = 0;
				}
			}
		}
	}

    if(arr[0][0] == 0){
        for(int j = 0; j < m; j++){
            arr[0][j] = 0;
        }
    }

    if(cols0 == 0){
        for(int i = 0; i < n; i++){
            arr[i][0] = 0;
        }
    }
	
}

int main() {
    vector<vector<int> > mat = { { 1, 1, 1, 1 },
                                 { 1, 0, 1, 1 },
                                 { 1, 1, 0, 1 },
								 { 0, 1, 1, 1 }
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