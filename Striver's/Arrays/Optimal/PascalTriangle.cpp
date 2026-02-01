#include <iostream>
#include <vector>
using namespace std;

vector <int> generateRow(int row) {
	long long ans = 1;
	
	vector <int> ansRow;
	
	ansRow.push_back(1);
	
	for(int cols = 1; cols < row; cols++){
		ans = ans * (row - cols);
		ans = ans / (cols);
		ansRow.push_back(ans);
	}
	
	return ansRow;
}


vector<vector<int>> pascalTriangle(int n) {
   vector <vector<int>> ans;
   
   for(int i = 1; i <= n; i++){
	ans.push_back(generateRow(i));
   }
   
   return ans;
}

int main() {
  
    int n = 5;
    vector<vector<int>> mat = pascalTriangle(n);
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}