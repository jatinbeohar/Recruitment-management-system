#include<stdio.h>
#include<string.h>
struct applicant{
	char id[10];
	char password[15];
	char aname[20];
	char eid[20];
	char DOB[10];
	char mobile[10];
	char add[30];
	char b10[30];
	char gra10[4];
	char b12[30];
	char perc12[3];
	char technicalskills[100];
	char wEx[100];
};

int main()
{	system("cls");
	struct applicant a;
	char id[20], Password[10];
	
	FILE *fp;
	printf("\nenter the loginID(like abc.txt):");
	gets(id);
    fp=fopen(id,"r+");
    fread(&a,sizeof(struct applicant),1,fp);
	
	printf("\nEnter your Password:");
	gets(Password); 
	 if(strcmp(a.password,Password)==0)
	 {
	 	printf("\nMatch Found");
		printf("\niske baad baaki structure members ki details view krwa denge!");
	 }

	  else
	  {
		printf("Match Not Found");
	  } 
	fclose(fp);
return 0;
}

