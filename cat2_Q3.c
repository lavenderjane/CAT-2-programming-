/*
NAME: JANE NJERI MUTHONI 
REG NO:CT101/G/26472/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:CAT question 3
*/
#include <stdio.h>
void promp();
void calculate_read();
void reading();
 int main(){
 	printf("\n1.create and enter 10 digits into a file");
 	 promp();
 	printf("\n2:read and process file contents and write to a diffrent file");
 	 calculate_read();
 	printf("\n3:reads from a diffrent file");
 	 reading();

	return 0;
}
void promp(){
	FILE *input;
	int numbers[10];
	int i;
	input=fopen("C:\\Users\\HP\\Desktop\\c work\\input.txt","w");
     for(i=0;i<10;i++){
     printf("\nenter the 10 digits:");
	scanf("%d",&numbers[i]);
	fprintf(input,"\t %d",numbers[i]);}
	
	
	
	fclose(input);
}
void calculate_read(){
	printf("\nstarting function 2");
	FILE *input,*output;
	int numbers[10];
	int sum=0;
	int i;
	int average;
	input=fopen("C:\\Users\\HP\\Desktop\\c work\\input.txt","r");
	for(i=0;i<=9;i++){
		fscanf(input,"%d",&numbers[i]);
		sum=sum+numbers[i];
		
	}
	average=sum/10;
	fclose(input);
	
	output=fopen("C:\\Users\\HP\\Desktop\\c work\\output.txt","w");
	fprintf(output,"\n sum is %d",sum);
     	fprintf(output,"\n average is%d",average);
     	printf("succesfully stored sum and average in output.txt\n");
		 
		 fclose(output);	
	
}
void reading(){
	printf("starting function 3:\n");
	FILE *input,*output;
	int Numbers;
	char process[100];
	input=fopen("C:\\Users\\HP\\Desktop\\c work\\input.txt","r");
	while(fscanf(input,"%d",&Numbers)==1){
		printf("\n %d", Numbers);
	}
	
	fclose(input);
	
	output=fopen("C:\\Users\\HP\\Desktop\\c work\\output.txt","r");
	while(fgets(process,sizeof(process),output)!=NULL){
		printf("\n %s",process);
	}
	fclose(output);
}
