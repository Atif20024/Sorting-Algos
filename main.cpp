#include <iostream>
using namespace std;

int arr[1000];
void merge(int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	int i, j, k;
	int l_[n1], r_[n2];
	for (i = 0; i < n1; i++) {
		l_[i] = arr[p + i];
	}
	l_[n1] = 999;
	for (j = 0; j < n2; j++) {
		r_[j] = arr[q + j + 1];
	}
	r_[n2] = 999;
	i = 0;
	j = 0;
	for (k = p; k <= r; k++) {
		if (l_[i] <= r_[j]) {
			arr[k] = l_[i];
			i = i + 1;
		}
		else {
			arr[k] = r_[j];
			j = j + 1;
		}
	}
}

void merge_sort(int p, int r) {
	int q;
	if (p < r) {
		q = p + ((r - p) / 2);
		merge_sort(p, q);
		merge_sort(q + 1, r);
		merge(p, q, r);
	}
}

int main() {
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int p = 0;
	merge_sort(p, n - 1);
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}