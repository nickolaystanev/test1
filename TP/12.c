#include <stdio.h>
#include <math.h>

main(){
	float x;
	int y;
	float n=1.0;
	int i=0;
	int s=0;
	float z=0.0;
	int j;
	int j1;
		printf("Vuvedete x (0<x<10) ");
		scanf("%f", &x);
		if((x>0) && (x<10)){
			int arr[10];
			while(i<=10){
				z=n/x;
				if (fmod(z, 1) == 0){
					for(j=0; j<=n; j++){
						s=s+j;
						
					}
					arr[i]=s;
					i++;
					j1=arr[i-1];
					s=s-j1;
				}
				n++;
				j=0;
			}
			for(i=0; i<=10; i++){
				printf("%d ", arr[i]);
			}
		}
}
				
				
