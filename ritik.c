#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int roll;
    int fees;
    char dob[10];
};


int main() {
	
    struct student s;
	FILE *fptr;
	fptr=(fopen("student.txt","a"));
	
    if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}

	
	printf("Enter your Name: ");
	scanf("%s",s.name);
	printf("Enter your Roll No.: ");
	scanf("%d",&s.roll);
    printf("Enter your fee amount: ");
	scanf("%d",&s.fees);
    printf("Enter your date of birth(_//_): ");
	scanf("%s",&s.dob);
	fprintf(fptr,"\nName: %s \nMarks = %d \nFees = %d\nDate of Birth: %s \n",s.name,s.roll,s.fees,s.dob);
	

    fptr = fopen("file.txt", "rb");
    fread(&s, sizeof(s), 1, fptr);
    
    printf("\nName: %s \nMarks: %d \nFees: %d\nDate of Birth: %s \n", s.name, s.roll,s.fees,s.dob);
    
    fclose(fptr);
}