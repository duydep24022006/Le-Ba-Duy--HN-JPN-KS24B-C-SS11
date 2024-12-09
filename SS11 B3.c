#include <stdIo.h>
int FiBoNacci(int n){
	int sum=1;
	for(int i=1;i<n;i++){
		sum*=i;
	}
	printf("dai thua cua %d la %d",n,sum);
	return sum;
}
int main(){
	int n,sum;
	printf("moi ban nhap do nguyen bat ki de tim tham so ");
	scanf("%d",&n);
	FiBoNacci(n);
	printf("dai thua cua %d la %d",n,FiBoNacci(sum));
	return 0;
}
