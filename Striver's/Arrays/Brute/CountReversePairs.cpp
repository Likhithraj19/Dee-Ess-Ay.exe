#include <iostream>
#include <vector>

using namespace std;

int team(vector <int> &arr, int n){

    int count = 0;

	for(int i = 0; i < n; i++){
		
		for(int j = i; j < n; j++){
			if(arr[i] > 2 * arr[j]){
				count++;
			}
		}
	}

    return count;
	
}

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = team(a, n);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}