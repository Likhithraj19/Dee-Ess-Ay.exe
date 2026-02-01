#include <iostream>
#include <vector>

using namespace std;


int countPairs(vector <int> &arr, int low, int mid, int high){
	
	int right = mid + 1;
    int count = 0;
	
	for(int i = low; i <= mid; i++){
		while(right <= high && arr[i] > 2LL * arr[right]){			
			right++;
		}
        count = count + (right - (mid + 1));
	}

    return count;
}

void merge(vector <int> &arr, int low, int mid, int high){
	vector <int> temp;
	
	int left = low;
	int right = mid + 1;
	
	while(left <= mid && right <= high){
		if(arr[left] <= arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else {
			temp.push_back(arr[right]);
			right++;
		}
	}
	
	while(left <= mid){
		temp.push_back(arr[left]);
		left++;
	}
	
	while(right <= high){
		temp.push_back(arr[right]);
		right++;
	}
	
	for(int i = 0; i < temp.size(); i++){
		arr[low + i] = temp[i];
	}
}

int mergeSort(vector <int> &arr, int low, int high){
    int count = 0;
    if(low >= high) return count;
	
	int mid = (low + high) / 2;
	count += mergeSort(arr, low, mid);
	count += mergeSort(arr, mid + 1, high);
	count += countPairs(arr,low,mid,high);
	merge(arr,low,mid,high);

    return count;
}

int team(vector <int> &arr, int n){
	return mergeSort(arr,0,n - 1);
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