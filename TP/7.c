#include <stdio.h>
#include <math.h>

int main(){
	int x;
	float n;	
	int y;
	int i=0;
	int t=0;
	int d;
	float j;
	int p;
		printf("Vuvedete x (0<=x<10) ");
		scanf("%d", &x);
		if((x>=0) && (x<10)){
			float arr[10];
			while (i<=10){
				n = cos(t);
				d = cos(t);
				j=n-d;
				j = j*1000;
				p = j;
				if(p%100==x){
					arr[i]=n;
					i++;
				}
				t++;
			}
			for (i=0; i<10;i++){
				printf("%f ", arr[i]);
			}
			
			
		}
			
}
		
