#include <stdio.h>

	int main(){
	int arr[10];
	int x;
	int y;
	int n;
	int i;
	int s;

	printf("Vuvedete x (0<x<10) ");
	scanf("%d", &x);
	
	if((x>0) && (x<10)){
		for(i=0; i<10; i++){
			s=0;
			for(n=0; n<1000; n++){
				if((n % ((i+1)*x) == 0)){
					s=s+n;
				}
			}
			arr[i]=s;
		}

		for (y=0; y<10; y++){
			printf("\n%d ", arr[y]);
		}
   
	}

	return 0;
}



