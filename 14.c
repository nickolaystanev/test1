#include <stdio.h> 

int prosto(int n){
 
	int c; 
 
	for(c=2; c<=n-1; c++){
		if(n%c == 0){ 
			return 0;
		}
	}
		if(c==n){
  			return 1;
		}
}

int main(){
 
	int x;
	int z;
	int a;
	int n;

	printf("Vuvedete chislo za x (0<x<10)");
	scanf("%d", &x);

  	if((x>0) && (x<10)){
   		int arr[10];
   		while(a<10){
    			for(n=1;n>0;n++){
     				z = prosto(n);
     				if (z == 1){
      					if(n%10 == x){
       						arr[a]=n;
       						a++;
      					}
     				}
    			}
   		}
   		for(a=0; a<10; a++){
   			 printf("%d ", arr[a]);
   		}
  	}
}
