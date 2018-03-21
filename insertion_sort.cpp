#include<iostream>
using namespace std;

void quick(int arr[], int n){
	for (i=1; i<n; i++){
		for(j=i; i<n; j++){
			if (arr[i]<arr[i-1]){
				swap(arr[i], arr[i-1]);
			}
		}
	
	}

}


int main(){
	int n,i;
	int arr[100];
	cin>>n;
	for (i=0; i<n; i++){
		cin>>arr[i];
	}
	quick(arr,n);
	for (i=0; i<n; i++){
		cout<<arr[i]<< " ";
	}
}
