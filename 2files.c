#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct file
	{
	char f[50];
	}fi[100],fe[100];
int k=0,j=0,i;
char a[50],b[50];
int flag,q;
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
				printf("chose file 1 or 2");
				scanf("%d",&q);
				if(q==1)
					{
					printf("enter  the file name:\t");
				scanf("%s",&fi[k].f[0]);
				printf("created file  %s\n\n",fi[k].f);
				k++;
					}
				else if(q==2)
					{
					printf("enter  the file name:\t");
				scanf("%s",&fe[j].f[0]);
				printf("created file  %s\n\n",fi[k].f);
				j++;
					}
				else
					{
					printf("wrong option");
					}
				break;
				}
			case 2 :
				{
				printf("chose file 1 or 2");
				scanf("%d",&q);
				if(q==1)
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
					}
				else if(q==2)
					{
					if(j==0)
					{
					printf("the folder is empty");
					break;
					}
				printf("List of Files in the Folder.\n");
				for(i=0;i<j;i++)
					{
					if(fe[i].f != ""){
						printf(" %s\n",fe[i].f);
						}
					}
					}
				else
					{
					printf("wrong option");
					}
				
				break;
				}
			case 3 :
				{
				printf("chose file 1 or 2");
				scanf("%d",&q);
				if(q==1)
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
					}
				else if(q==2)
					{
					flag=0;
				printf("enter the file name : ");
				scanf("%s",&a[0]);
				for(i=0;i<j;i++)
					{
					if(strcmp(a,fe[i].f)==0)
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
					}
				else
					{
					printf("wrong option");
					}
				
					break;
					}
					case 4 :
						{
						printf("chose file 1 or 2");
				scanf("%d",&q);
				if(q==1)
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
					}
				else if(q==2)
					{
					printf("enter the file name : ");
						scanf("%s",&a[0]);
						for(i=0;i<j;i++)
							{
							if(strcmp(a,fe[i].f)==0)
								{
								flag=1;
								strcpy(fe[i].f,"");
								printf("file deleted");
								
								}
							}
						if(flag==0)
							{
							printf("file not found\n");
							}
					}
				else
					{
					printf("wrong option");
					}
						
					break;
						}
					case 5 :
						{
						printf("chose file 1 or 2");
				scanf("%d",&q);
				if(q==1)
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
					}
				else if(q==2)
					{
					printf("enter the file name to rename and new file name : ");
						scanf("%s%s",&a[0],&b[0]);
						for(i=0;i<j;i++)
							{
							if(strcmp(a,fe[i].f)==0)
								{
								flag=1;
								strcpy(fe[i].f,b);
								}
							}
						if(flag==0)
							{
							printf("file not found\n");
							}
					}
				else
					{
					printf("wrong option");
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
