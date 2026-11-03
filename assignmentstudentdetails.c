#include <stdio.h>
#include<stdlib.h>
int main(){	
	//1.start of a program

FILE *fptr;
char student_name[300];
char registration_number[500];
int total_marks;


fptr= fopen("C:results.dat", "wb");


	if (fptr ==NULL){
		printf("ERROR !\n");
		

			
	
		exit(1);
	}
	
	
	printf("Enter students name");
	
	fgets(student_name, sizeof(student_name),stdin);
	printf("Enter student registration number");
	fgets(registration_number, sizeof(registration_number),stdin);
	printf("Enter total marks");
	scanf("%d",&total_marks);

//2. write to the file	
	fprintf(fptr,"student name :%s\n", student_name);
fprintf(fptr,"registration number:%s\n", registration_number);
fprintf(fptr,"total marks:%d\n", total_marks);

	//3.close the file
	fclose(fptr);
printf("students details entered succesfully.");
	return 0;
}