#include <stdio.h>
#include <math.h>

main(){
	float x;
	int y;
	float a=0;
	int b=1;
	int i=1;
	int s;
	float z;
	float t;
		printf("Vuvedete x (0<=x<10) ");
		scanf("%f", &x);
		if((x>=0) && (x<10)){
			int arr[i];
			while(i<10){
				s = a+b;
				a=b;
				b=s;
				z=a/x;
				if (fmod(z, 1) == 0){
					arr[i]=a;
					i++;
				}
			
			}
			for(i=1; i<10; i++){
				printf("%d\n", arr[i]);	
				}
		}
}
