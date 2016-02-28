#include<stdio.h>

void main(){
	int matrix[5][5], i, j;
	int tuple_matrix[3][26];
	printf("Enter the elements \nwith majority zero\n");
	for(i = 0; i<5; i++){
		for(j=0; j<5; j++){
			printf("Enter the value of [%d][%d]\n",i,j );
			scanf("%d", &matrix[i][j]);
		}
	}
	int count = 0;
	for(i = 0; i<5; i++){
		for(j=0; j<5; j++){
			int current_element = matrix[i][j];
			if(current_element!=0)
			{
				count++;
				tuple_matrix[0][count] = i;
				tuple_matrix[1][count] = j;
				tuple_matrix[2][count] = current_element;
			}	
		}
	}
	
	tuple_matrix[0][0] = 5;
	tuple_matrix[1][0] = 5;
	tuple_matrix[2][0] = count;
	
	for(i = 0; i< count; i++){
		printf("%d\t%d\t%d\n",tuple_matrix[0][i],tuple_matrix[1][i],tuple_matrix[2][i]);
	}
}
