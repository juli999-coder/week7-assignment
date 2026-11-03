#include <stdio.h>
#include<stdlib.h>
int main(){	
	//1.start of a program

FILE *fptr;
double amount;
double total_sales=0;

//read all the instructions
fptr= fopen("C:\\Users\\user\\Documents\\sales.txt", "r");


	if (fptr ==NULL){
		printf("ERROR !\n");
		

			
	
		exit(1);
	}
//ii. calculate total	
while(fscanf(fptr,"%lf",&amount)==1){
	total_sales += amount;
}	
	printf("total sales for the day:%.2f\n",total_sales);

	//3.close the file
	fclose(fptr);
printf("file closed succesfully.");
	return 0;
}