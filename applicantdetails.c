
#include<stdio.h>
#include<string.h>
struct applicant{
	char id[10];
	char password[15];
	char aname[20];
	char emailID[20];
	char DOB[10];
	char mobile[10];
	char add[30];
	char b10[30];
	char gra10[4];
	char b12[30];
	char perc12[3];
	char technicalskills[100];
	char workexperiance[100];
};
//struct applicant A;

int main()// here we enter each of the above mentioned details of the applicants
{	struct applicant A;
	system("cls");
	FILE *f;
	char fname[10];//separate fpile
	printf("\nEnter login ID(maximum 10 characters)(like abc.txt):");
	gets(fname);
	f=fopen(fname,"w");
	strcpy(fname,A.id);
	printf("\nEnter password :");
	gets(A.password);
	printf("\nEnter name :");
	gets(A.aname);
	printf("\nEnter EmailID :");
	gets(A.emailID);
	printf("\nEnter DOB :");
	gets(A.DOB);
	printf("\nEnter moblie number :");
    gets(A.mobile);
    printf("\nEnter address :");
    gets(A.add);
    printf("\nEnter name of 10th Board :");
    gets(A.b10);
    printf("\nEnter 10th std. CGPA/percentage :");
    gets(A.gra10);
    printf("\nEnter name of 12th Board :");
    gets(A.b12);
    printf("\nEnter 12th std. percentage :");
    gets(A.perc12);
    printf("\nEnter technicalskillsnical Skills :");
    gets(A.technicalskills);
    printf("\nEnter Work Experience (if any) :");
    gets(A.workexperiance);
    fwrite(&A,sizeof(struct applicant),1,f);
    fclose(f);
    /*//this is test run part to display one of the contents from applicant details
    f=fopen("applicant_list.txt","r");
    printf("\nlogin ID :%s",A.id);
	printf("\npassword :%s",A.password);
    fclose(f);
 	*/
	return 0;
	}
	
