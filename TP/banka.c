#include <stdio.h>

int main() {
	int x;
	int y;
	float s=0.0;
	float a=1000.0;
	
	while(a>=1){
		s=s+a;
		a = 0.9 * a;

		if(a<=1){
			s+=1;
		}
	}
	printf("%f\n", s);
}
