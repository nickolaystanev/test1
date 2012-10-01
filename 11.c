#include <stdio.h>
#include <math.h>

int main() {
	
	int x;
	int y=0;
	int i=0;
	float z;
	float arr[10];
	int n=0;

	printf("Vuvedete x (0<x<10)");
	scanf("%d", &x);
	
		if((x>0) && (x<10)){

			while(n<10){
			
				while(i<x){
					z=cos(i);
					arr[y]=arr[y]+z;
					i++;
				}

				y++;
				i=x;
				x=x+x;
				n++;
			}
			for(y=0; y<10; y++){
				printf("\n%f",arr[y]);
			}
			
		}
}
			
