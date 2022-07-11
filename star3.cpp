#include <stdio.h>
int main(){
	int i, j, k = 1;
	for(i = 5; i > 0; i--){
		for(j = 0; j < i; j++){
			printf(" ");
		}
		for(int n = 0; n < k; n++){
			printf("* ");
			//printf("*");
		}
		printf("\n");
		k += 1;
		//k += 2
	}
	return 0;
}
