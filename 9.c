#include <stdio.h>
#include <math.h>

int main(){
	float x;
	float n=3.0;	
	int i;
	int y=1;
	int t=0;
	float pi=4.0;
		printf("Vuvedete stoinost za x (0<x<1) ");
		scanf("%f",&x);
		while((4/n)>=x){
			if(t<y){
				pi = pi-(4.0/n);
				t++;
				n=n+2.0;
			}
			if(t==y){
				pi = pi+(4.0/n);
				y++;
				n=n+2.0;
			}
		}
		printf("%f ", pi);
}
