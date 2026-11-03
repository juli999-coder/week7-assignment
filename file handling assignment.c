#include <stdio.h>
#include<stdlib.h>
int main(){	
	//1.start of a program

FILE *fptr;
char full_name[300];
char registration_number[500];

fptr= fopen("C:student_details.txt", "w");


	if (fptr ==NULL){
		printf("ERROR !\n");
		

			
	
		exit(1);
	}
	
	
	printf("Enter students name");
	
	fgets(full_name, sizeof(full_name),stdin);
	
	
	printf("Enter students registration number");
	fgets(registration_number ,sizeof(registration_number),stdin);

//2. write to the file	
	fprintf(fptr,"full name :%s\n", full_name);
	fprintf(fptr,"registration number:%s",registration_number);
	//3.close the file
	fclose(fptr);
printf("student details entered succesfully.");
	return 0;
}