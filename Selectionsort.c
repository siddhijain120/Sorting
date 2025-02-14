#include<stdio.h>

void Selection_Sort(int arr[], int n){//5 1 4 2 3
	int minidx, temp;
	for(int i = 0; i < n-1; i++){//i -> 0 to n - 1
		minidx = i;//initialise to i 
		for(int j = i+1; j < n; j++){//j -> i+1 to n
			if(arr[j] < arr[minidx]){
				minidx= j;
			}
		}
		temp = arr[minidx];
		arr[minidx] = arr[i];
		arr[i] = temp;
	}
	}
	int main() {
		int n;
		scanf("%d",&n);
	int arr[n];
		for(int i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}
	Selection_Sort(arr,n);
	for(int i = 0 ; i < n ; i++){
		printf("%d ",arr[i]);
	}
}