#include <stdio.h>

int main()
{
	srand(time(0));
	int x;
	int i;
	int y;
	int a = 0;
	int temp;
		printf("Molq vuvedete proizvolno chislo x (0<x<10)");
		scanf("%d", &x);
		if ((x>0) && (x<10)){
			int arr[100];
			for (i=0; i<100; i++){
				arr[i] = rand() % 100;
			}
			for (a=0;a<100; a++){
				for(y=0; y<99; y++){
					if((arr[y]%10 == x) && (arr[y-1]%10 != x)){
						temp = arr[y+1];
						arr[y+1] = arr[y];
						arr[y] = temp;
					}
				}
			}
			for(i=0; i<100; i++){
				printf("%d ", arr[i]);
			}
		
		}
	
}
