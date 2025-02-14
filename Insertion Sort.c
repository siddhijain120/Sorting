#include<stdio.h>

void Insertion_Sort(int arr[], int n){//5 2 1 4 3
	//start from first element of unsorted array to n
	for(int i = 1 ; i < n ; i++){
		int j = i - 1;//last element in sorted array
		int temp = arr[i];//first element in unsorted array
		while(j >= 0 && arr[j] > temp){//checks if j >= 0 and last element of sorted is > temp(first element unsorted)
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}
	Bubble_Sort(arr,n);
//	Insertion_Sort(arr,n);
	for(int i = 0 ; i < n ; i++){
		printf("%d ",arr[i]);
	}
}