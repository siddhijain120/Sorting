//Bubble Sort

#include<stdio.h>

void Bubble_Sort(int arr[], int n){
	int temp;
	for(int i = 0; i < n-1; i++){//runs from 0 to n-1
		for(int j = 1; j < n-i; j++){//runs from 1 to n-i as after every pass the last element gets sorted
			if(arr[j-1] > arr[j]){//swap if left element > right element
				temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
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
