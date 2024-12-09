#include <stdio.h>
int findMax_Value(int arr[],int size){
	int Max=arr[0];
	for(int i=0;i<size;i++){
		if(Max<arr[i]){
			Max=arr[i];
		}
	}
	return Max;
}
int main(){
	int arr[]={4,2,5,8,4,3,8386};
	int size=sizeof(arr)/sizeof(int);
	findMax_Value(arr,size);
	printf("so lon nhat trong mang la %d",findMax_Value(arr,size));
	return 0;
}
