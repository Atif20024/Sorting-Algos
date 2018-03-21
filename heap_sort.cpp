#include<iostream>
#include<cmath>
using namespace std;

int arr[1000];

void max_heapify(int i, int n){
    int l = 2*i+1;
    int r = 2*i+2;
    int largest;
    if(l<n && arr[l]>arr[i])
        largest = l;
    else
        largest = i;
    if (r< n && arr[r]> arr[largest])
        largest = r;
    if (largest != i){
        swap(arr[i], arr[largest]);
        max_heapify(largest, n);
    }
}

void max_heap(int n){
    int i;
    //heap_size = n;
    for(i = n/2-1; i>0; i--){
        max_heapify(i, n);
    }
}

int heap_sort(int n){
    max_heap(n);
    for (int i=n-1; i>=0; i--){
        swap(arr[0], arr[i]);
        max_heapify(0, i);
    }
}

int main(){
    int n,i;
    cin>>n;
    for(i=0; i<n; i++){
        cin>> arr[i];
    }
    heap_sort(n);
    for(i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }

}
