#include<stdio.h>
#include<stdlib.h>
struct vac{
	
			char vacancyName[20];
			char post[5];//no. of post available
			char date[9];
			char a[50];//for special comment
			};
				//struct vac v;
			
int main()
{system("cls");

	FILE *f1;
	f1=fopen("vacancylist.txt","a");
	
	 struct vac v1[10]; 
	int i=0;
		char ch='y';
		
		while (ch=='y'||ch=='Y')
		{	
		printf("\nenter the vacancy name:");
		gets(v1[i].vacancyName);
		printf("\ntotal post available:");// date aur post read mode m ek saath hai 
		gets(v1[i].post);
		printf("\nlast date for apply:");
		gets(v1[i].date);
		printf("\nspecial requirement:");
		gets(v1[i].a);
		i=i+1;
		fwrite(v1,sizeof(struct vac),1,f1);
		printf("\nwant to enter more:(y/n)");
		fflush(stdin);
        ch = getche();
		}
	fclose(f1);
	return 0;
	
}
