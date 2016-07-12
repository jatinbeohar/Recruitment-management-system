#include<stdio.h>
#include<stdlib.h>

 struct HrDetails{
						char name[20];
						int id;
						char password[8];
                         
				};
 struct vac      {
						char vacancyName[20];
						char post[2];//no. of post available
						char date[9];
						char a[50];//for special comment
			
					};
						 
	struct vac v;
	FILE *f1;		

void createVacancy()// individually successfully running
 {	
	f1=fopen("vacancylist.txt","a");
	char ch='y';
		while (ch=='y'||ch=='Y')
		{	
			printf("\nenter the vacancy name:");
			gets(v.vacancyName);
			printf("\ntotal post available:");
			gets(v.post);
			printf("\nlast date for apply:");
			gets(v.date);
			printf("\nspecial requirement:");
			gets(v.a);
			fwrite(&v,sizeof(struct vac),1,f1);//everytime before going to while it is write in file
			printf("\nwant to enter more:(y/n)");
			fflush(stdin);// don't know the purpose
			ch = getche();
		}	
	fclose(f1);
  }
void editVacancy()//individually successfully running
   {
		 system("cls");
	//struct vac v;
	char vacName[20];
	//FILE *f1;
	char flag;
	f1=fopen("vacancylist.txt","r+");
	fread(&v,sizeof(struct vac),1,f1);
	fseek(f1,0,SEEK_SET);
	printf("%s",v.vacancyName);
	
	printf("\nenter the name of vacancy u want to edit:");
	gets (vacName);
	if (strcmp(v.vacancyName,vacName)==0)
	{
		printf("\nchange in the post is :");
		scanf("%s",v.post);
		printf("\n enter the new date :");
		scanf("%s",v.date);
		fwrite(&v,sizeof(struct vac),1,f1);
	}
	else
	{ createVacancy();// not sure it will call createvacancy() or not
	}
	
	fclose(f1);
	//for deleting the file
		printf("\ndo you want to delete existing vacancylist.txt file?(y/n):");
		scanf("%c",&flag);
		if(flag=='y')
		{	if(remove("vacancylist.txt")==0);
				printf("\n flag is successfully removed");
			else
				printf("\nfile cannot be deleted!");
		} 
   
   }
   
 void showApplicantDetails ()//didn't tested individually
 {
	 char appDetails[10];
	 printf("\nwhich applicant details you want to see(like abc.txt):");
	 gets(appDetails);
	 f1=fopen(appDetails,"r");
	 fread()
	 //this section will contain the details of the applicant like its name, age, experience
 }
 void deleteApplicantDetails()//didn't tested individually
 {
	 char applicantFilename[10];
	 printf("\nenter the name of applicant whom record you want to delete:(in .txt format)");
	 scanf("%s",applicantFilename);
		
			if(remove(applicantFilename)==0);
				printf("\n flag is successfully removed");
			else
				printf("\nfile cannot be deleted!");
		
 }
 int main()//function having switch case over below functions
{
	system("cls");
	char choice;
	printf("\t\t\tWELCOME");
	printf("\n\n\n\t\t\t1.CreateVacancy");
	printf("\n2.EditVacancy");
	printf("\n3.ShowApplicantsDetail(individually)");
	printf("\n4.DeleteApplicantDetails");
	printf("\n5.returntomainMENU");
	scanf("%c",&choice);
	switch(choice){
					case 1:createVacancy();
							break;
					case 2:editVacancy();
							break;
					case 3:showApplicantDetails();
							break;
					case 4:deleteApplicantDetails();
							break;
					case 5://return to main menu 
							break;
					default:printf("\nsorry wrong option!");
							break;
					}
	return 0;
}
