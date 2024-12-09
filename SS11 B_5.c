#include <stdio.h>
#include <math.h>

int primeNumber(int n){
	if(n<=1){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int a;
	for(int i=0;i<2;i++){
		printf("moi ban nhap vao so nguyen thu nhat ");
		scanf("%d",&a);
		if(primeNumber(a)){
			printf("true\n");
		}else{
			printf("false\n");
		}
	}
	return 0;
}
