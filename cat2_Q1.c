/*
NAME: JANE NJERI MUTHONI 
REG NO:CT101/G/26472/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:CAT quetion 1 using a 3D array to store scores and print them 
*/
#include <stdio.h>
int main(){
	int k,i,j;
	int scores[2][2][2]={
	{
	{65,92},
	{84,72}
	},
	{
	{35,70},
	{59,67}
	}
	
	};
	for(k=0;k<=1;k++){
		printf("\n");
		for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			printf("\t %d",scores[k][i][j]);
		}
		printf("\n");
		}
	}
	
	return 0;
}