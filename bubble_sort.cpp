#include<iostream>
using namespace std;

int a[1000];


void bubble_sort(int n){
	int i, j, temp;
	for (i=0; i<n; i++){
		for (j=0; j<n-1; j++){
			if (a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

}


int main(){
	int i, n;
	cin>> n;
	for(i=0; i<n; i++){
		cin>> a[i];
	}
	for (i=0; i<n; i++){
		cout<< a[i];
	}
	cout<<"\n";
	bubble_sort(n);
	for (i=0; i<n; i++){
		cout<< a[i] << " ";
	}


}
