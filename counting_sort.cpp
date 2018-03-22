#include <iostream>
using namespace std;

int max(int arr[], int n) {
	int max = 0;
	int i, ind;
	for (i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
			ind = i;
		}
	}
	return ind;
}

void counting(int arr[], int n) {
	int count[100] = {0};
	int i;
	for (i = 0; i < n; i++) {
		count[arr[i]]++;
	}
	int k = max(arr, n);
	int p = arr[k] + 1;
	int cum_arr[p];
	int sum = 0;
	for (i = 0; i < p; i++) {
		sum = sum + count[i];
		cum_arr[i] = sum;
	}
	
	for (i=p-1; i>=0; i--){
	    for (int j=0; j<cum_arr[i]; j++){
	        arr[j] = i;
	    }
	    
	}
	cout << endl;
	return;
}

int main() {
	int n, i;
	int arr[100];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	counting(arr, n);
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
