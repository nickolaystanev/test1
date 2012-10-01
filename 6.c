#include <stdio.h>
#include <math.h>


int main() {
	srand(time(0));
	int x;
	int i;
	int y;
	int t;
	int j;
	int arr[100];

	printf("Vuvedete x (0<x<10)");
	scanf("%d", &x);
	
	if((x>0) && (x<10)){
		for(i=0; i<100; i++){
			arr[i] = rand() % 100;
		}
		for (i = 99; i > 0; i--)
  		{
			for (j = 1; j <= i; j++)
    			{
     				if((arr[j]%10 == x) && (arr[j-1]%10 != x))
				//if(arr[j-1] > arr[j])
      				{
        				t = arr[j-1];
        				arr[j-1] = arr[j];
        				arr[j] = t;
      				}
    			}
  		}
		
		for(y=0; y<100; y++){
			printf("%d ", arr[y]);
		}
	}
}
