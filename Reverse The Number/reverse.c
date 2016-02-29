#include<stdio.h>
#include<stdlib.h>
int main(){
	int N;
	scanf("%d",&N);
	int i=0;
	int *a = (int *)malloc((sizeof(int))*N);
	for(;i<N;i++)
		scanf("%d",&a[i]);
	for(i=0;i<N;i++){
		int rev = 0;
		int num = a[i];
		while(num!=0){
			rev=rev*10+num%10;
			num/=10;
		}
		printf("%d\n",rev);
	}
	free(a);
	return 0;
}
