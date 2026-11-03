#include <stdio.h>
#include<stdlib.h>
int main(){	
	//1.start of a program

FILE *fptr;
char book_name[300];


fptr= fopen("C:borrowed_book.txt", "w");


	if (fptr ==NULL){
		printf("ERROR !\n");
		

			
	
		exit(1);
	}
	
	
	printf("Enter book name");
	
	fgets(book_name, sizeof(book_name),stdin);

//2. write to the file	
	fprintf(fptr,"book name :%s\n", book_name);

	//3.close the file
	fclose(fptr);
printf("borrowed book details entered succesfully.");
	return 0;
}