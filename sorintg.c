//SORTING TECHNIQUES
//Bubble Sort

#include<stdio.h>

void Bubble_Sort(int arr[], int n){
int temp;
for(int i = 0; i < n-1; i++){
	for(int j = i+1; j < n-i; j++) {
		if(arr[j-1] < arr[j]) {
			temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
		}
	}
}
	
int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}
	Bubble_Sort(arr,n);
	for(int i = 0 ; i < n ; i++){
		printf("%d ",arr[i]);
	}
}
