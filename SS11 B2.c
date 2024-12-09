#include <stdio.h>

int arr_fullIndex(int arr[],int size){
	printf("day la tat ca phan tu trong ham\n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
int main(){
	int arr[]={4,2,8,12,5,1};
	int size=sizeof(arr)/sizeof(int);
	arr_fullIndex(arr,size);
	return 0;
}
