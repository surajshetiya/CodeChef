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
		int num = a[i];
		int count = 0;
		while(num!=0){
			if(num%10==4)
				count++;
			num/=10;
		}
		printf("%d\n",count);
	}
	free(a);
	return 0;
}
