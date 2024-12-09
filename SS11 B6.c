#include <stdio.h>

int perFectNumber(int n){
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	printf("moi ban nhap so nguyen ");
	scanf("%d",&n);
	if(perFectNumber(n)){
		printf("true\n");
	}else{
		printf("false\n");
	}
	return 0;
}
