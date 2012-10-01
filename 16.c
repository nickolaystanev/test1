#include <stdio.h>
#include <math.h>

int main() {
	
	int x;
	int i;
	int n;
	int y;
	int a=0;
	int arr[10];
	printf("Vuvedete x");
	scanf("%d", &x);
	
	while(a<10){
		arr[a]=0;
		for(n=0;n<x;n++){
			if(n%2 == 1){
				if(fmod(x,n) == 0){
					arr[a]=n;
					a++;
				}
			}
		}
		for(i=0;i<10;i++){
			printf("%d ", arr[i]);
		}
	}
}
