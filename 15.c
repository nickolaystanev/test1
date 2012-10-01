#include <stdio.h>

int main() {
	int n;
	int x;
	int t;
	int i=0;
	int a=0;
	int b=1;
	int s;
	int arr[10];
	
	printf("Vuvedete x (0<x<10)");
	scanf("%d", &x);
	
	if((x>0) && (x<10)){
		while(i<10){
			arr[i]=0;
			for(t=0;t<20;t++){
				s=a+b;
				a=b;
				b=s;
				if(a%10 == x){
					arr[i]=arr[i] + a;
					i++;
				}
			}
		}
		for(n=0; n<10; n++){
			printf("\n%d", arr[n]);
		}
	}
}
