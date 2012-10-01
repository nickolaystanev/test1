#include <stdio.h>
int main()
{
	int x;
	int y;
	int i;
	int a=0;
	int b=1;
	int s;
		printf("Molq vuvedete purvoto chislo: ");
		scanf("%d", &x);
		printf("Molq vuvedete vtoroto chislo: ");
		scanf("%d", &y);
			if (x<y){
				for (i=0; i<=y; i++){
					s = a+b;
					a=b;
					b=s;
					if ((a>=x) && (a<=y)){
						printf("%d\n", a);
					}
					
					
					
				}
			}		

				
}
