#include <stdio.h>
#include <math.h>


int main ()
{
	int x;
	int y;
	int i;
	int a;	
	int b;
	float temp;

		printf("Molq vuvedete broi na elementite na masiva: ");
		scanf("%d", &x);
			if ((x>0) && (x<10)){
			float arr[x];
				for (i=0; i<x; ++i){
					arr[i] = cos(i);
					printf("%f ", arr[i]);
				}
			printf("\nSorted: " );
				for (a=(x-1); a>0; a--){
					for (b=1; b<=a; b++){
						if (arr[b-1] < arr[b]){
							temp = arr[b-1];
							arr[b-1] = arr[b];
							arr[b] = temp;
						}
					}
				}
				for (i=0; i<x; i++){
					printf("%f ", arr[i]);	
				}
			}
			else printf("Molq vuvedete drugo chislo");


				
}

