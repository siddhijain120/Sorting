#include<stdio.h>

void Merge(int A[], int n, int low, int mid, int high){
	int i = low;
	int j = mid+1;
	int B[high - low + 1];
	int k = 0;
	
	while(i <= mid && j <= high){
		if(A[i] < A[j]){
			B[k++] = A[i++];
		}
		else{
			B[k++] = A[j++];
		}
	}
	while(i <= mid) B[k++] = A[i++];
	while(j <= high) B[k++] = A[j++];
	k=0;
	for(int i = low; i <= high; i++){
		A[i] = B[k++];
	}
}

void MergeSort(int A[], int n, int low, int high){
	if(low >= high) return;
	int mid = (low + high)/2;
	MergeSort(A,n,low,mid);
	MergeSort(A,n,mid+1,high);
	Merge(A,n,low,mid,high);
}

int main() {
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&A[i]);
	}
	MergeSort(A,n,0,n-1);
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
}