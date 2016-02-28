#include<stdio.h>

void main(){
	int polynomial1[5][2];
	int polynomial2[5][2];
	
	printf("Enter the coefficient and power of first polynomial\n");
	int i;
	for(i = 0; i< 5; i++){
		printf("Enter the coefficient and power of %dth element\n", i+1);
		scanf("%d %d", &polynomial1[i][0], &polynomial1[i][1]);
	}
	
	printf("Enter the coefficient and power of second polynomial\n");
	for(i = 0; i< 5; i++){
		printf("Enter the coefficient and power of %dth element\n", i+1);
		scanf("%d %d", &polynomial2[i][0], &polynomial2[i][1]);
	}
	
	for(i = 0; i<5; i++){
		int coeff1 = polynomial1[i][0] ;
		int power1 = polynomial1[i][1];
		int resultCoeff = coeff1;
		int j;
		for(j = 0; j<5; j++){
			int coeff2 = polynomial2[j][0];
			int power2 = polynomial2[j][1];
			if(power1==power2)
				resultCoeff += coeff2;
		}
	
	printf("%dx^%d\t", resultCoeff, power1);		
	}
	
}
