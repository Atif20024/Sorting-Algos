#include<iostream>
using namespace std;

int arr[1000];

void swap(int a, int b) {
	int temp;
	temp = arr[b];
	arr[b] = arr[a];
	arr[a] = temp;
}

int find_min(int i, int n) {
	int k,ind;
	int m_n = 9999;
	for (k=i; k<n; k++){
		if (arr[k] < m_n)
		{
			m_n = arr[k];
			ind=k;
		}
	}
	return ind;
}

void selection_sort(int n){
	int i, j, index;
	int minimum;
	for (i=0; i<n; i++){
		index = i;
		for(j=i; j<n; j++){
			minimum = find_min(i, n);
			if (arr[minimum] < arr[index])
				swap(index, minimum);
		}
	}
	return;
}


int main(){
	int  n, i;
	cin>> n;
	for( i=0; i<n; i++){
		cin>> arr[i];
	}
	selection_sort(n);
	for (i=0; i<n; i++){
		cout<< arr[i];
	}
}
