#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int i,N,*v;
    N=10;
	v=(int *)malloc(N*sizeof(int));
	printf("�C�t�ƧǪk...\n�s�y�H�����Q��1-100�����\n�H�U : ");
	for(int i=0;i<N;i++){
		v[i]=rand()%99+1;
		printf("%d ",v[i]);
	}

	for(int j=0;j<N-1;j++){	
		for(int i=0;i<(N-1-j);i++){
			if(v[i]>v[i+1]){
				int f=v[i+1];
				v[i+1]=v[i];
				v[i]=f;
			}
		}
	}	
	printf("\n�ƦC����~\n");
	for(int i=0;i<N;i++){
		printf("%d ",v[i]);
	}
	if(N%2==1){
		printf("\n����Ƭ�%d",v[(N+1)/2]);
	}else{
		float mid=(v[N/2]+v[(N-2)/2])/2;
		printf("\n����Ƭ�%f",mid);
	}
	return 0;
}
