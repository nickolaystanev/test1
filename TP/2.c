#include <stdio.h>
int main()
{
	int x;
	int y;
	int i;
	int a=0;
		printf("Molq vuvedete purvoto chislo: ");
		scanf("%d", &x);
		printf("Molq vuvedete vtoroto chislo: ");
		scanf("%d", &y);
			if (x<y){
				for (i=x; i<=y; i++){
					if (i%17 == 0){
						a = a + i;
					}
				}
			}
		printf("Sborut e: %d\n", a);
				
}
