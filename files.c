#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct file
	{
	char f[50];
	}fi[100];
int k,i;
char a[50],b[50];
int flag;
int main()
	{
	while(1)
		{
		int n;
		printf("enter the options.....1.create..2.list..3.search..4.delete...5.rename..6.exit");
		scanf("%d",&n);
		switch(n)
			{
			case 1 : 
				{
				printf("enter  the file name:\t");
				scanf("%s",&fi[k].f[0]);
				printf("created file  %s\n\n",fi[k].f);
				k++;
				break;
				}
			case 2 :
				{
				if(k==0)
					{
					printf("the folder is empty");
					break;
					}
				printf("List of Files in the Folder.\n");
				for(i=0;i<k;i++)
					{
					if(fi[i].f != ""){
						printf(" %s\n",fi[i].f);
						}
					}
				break;
				}
			case 3 :
				{
				flag=0;
				printf("enter the file name : ");
				scanf("%s",&a[0]);
				for(i=0;i<k;i++)
					{
					if(strcmp(a,fi[i].f)==0)
						{
						flag=1;
						}
					}
					if(flag==1)
						{
						printf("file  found\n");
						}
					else
						{
						printf("file not found\n");
						}
					break;
					}
					case 4 :
						{
						printf("enter the file name : ");
						scanf("%s",&a[0]);
						for(i=0;i<k;i++)
							{
							if(strcmp(a,fi[i].f)==0)
								{
								flag=1;
								strcpy(fi[i].f,"");
								printf("file deleted");
								
								}
							}
						if(flag==0)
							{
							printf("file not found\n");
							}
					break;
						}
					case 5 :
						{
						printf("enter the file name to rename and new file name : ");
						scanf("%s%s",&a[0],&b[0]);
						for(i=0;i<k;i++)
							{
							if(strcmp(a,fi[i].f)==0)
								{
								flag=1;
								strcpy(fi[i].f,b);
								}
							}
						if(flag==0)
							{
							printf("file not found\n");
							}
					break;
						}
						case 6 :
							{
							exit(0);
							}
				}
			}
		}
