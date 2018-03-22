#include<iostream>
using namespace std;

void insertion(int arr[], int n){
	for (int i=1; i<n; i++){
	    int j=i-1;
	    int key = arr[i];
	    while(j>=0 && arr[j] > key){
	        swap(arr[j], arr[j+1]);
	        j=j-1;
	    }
	}
	return;
}


int main(){
	int n,i;
	int arr[100];
	cin>>n;
	for (i=0; i<n; i++){
		cin>>arr[i];
	}
	insertion(arr,n);
	for (i=0; i<n; i++){
		cout<<arr[i]<< " ";
	}
}
