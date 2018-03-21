#include<iostream>
using namespace std;


void quick_sort(int arr[],int p, int n){
	int 	j = p;
	int i = j-1;
	int pivot = n;
	if(p>=n) return;
	for(j=p; j<=n;j++){
		if(arr[pivot]>arr[j])
		{
			i=i+1;
			swap(arr[i],arr[j]);
		}
	}
	i=i+1;
	swap(arr[i],arr[pivot]);
	quick_sort(arr,0,i-1);
	quick_sort(arr,i+1,n);
	return;
}


int main(){
	int n,i;
	int arr[100];
	cin>>n;
	for (i=0; i<n; i++){
		cin>> arr[i];
	}
	
	quick_sort(arr,0, n-1);
	for (i=0; i<n; i++){
		cout<< arr[i]<< " ";
	}
	
}
