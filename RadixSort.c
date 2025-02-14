#include<stdio.h>

int get_max(int A[], int n){
	int max = A[0];
	for(int i = 0; i < n; i++){
		if(A[i] > max){
			max = A[i];
		}
	}
	return max;
}

void PrintArray(int A[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}

void RadixSort(int A[], int n) {
	int m = get_max(A,n);
	int bucket[10][n];
	while(m) {
		int e = 1;
		int cnt[10] = {0};
		for(int i = 0; i < n; i++) {
			int pos = (A[i]/e)%10;
			bucket[pos][cnt[pos]]= A[i];
			cnt[pos]++;
		}
		int c = 0;
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < cnt[i]; j++) {
				A[c] =bucket[i][j];
				c+=1;
			}
		}
		e*= 10;
		m/= 10;
	}
}

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	RadixSort(arr,n);
	PrintArray(arr,n);
	return 0;
}