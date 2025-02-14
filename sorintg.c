//SORTING TECHNIQUES
//Bubble Sort

//REACT
//R - Repeat
//E - Example
//A - Algorithm
//C - Code it
//T - Test it

#include<stdio.h>

void Bubble_Sort(int arr[], int n){// 5 2 1 4 3
	//do (n-1) passes
	int temp;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n-i; j++){
			if(arr[j-1] < arr[j]){
				temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
	}

//void Insertion_Sort(int arr[], int n){
//		//1.insert the first element from unsorted to sorted array
//		//How to seperate first half and second half
//		//[0 1 2 3 4 ...n]
//		//i -> 0 to i - 1 sorted and i to n unsorted
//		//pick first element from unsorted i
//		//
//		for(int i = 1; i < n; i++){
//			//i first element in unsorted
//			int j = i - 1;
//			int temp = arr[i];
//			while(j >= 0 && arr[j] > temp){
//				arr[j+1] = arr[j];
//				j--;
//			}
//			arr[j+1] = temp;
//		}
//}

int main() {
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
}