/* This is an applications that checks for the mental health of a patient and takes the required action to prevent 
a life from being wasted */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct per_info
{
	char first_name[50];
	char last_name[50];
	int age;
	char phone_number[50];
	char gender;
	char Address[200];
};
void per_info()
{
	FILE *f;
	f=fopen("personal_info.dat","a");
	struct per_info p1;
	printf("please enter your first name\n");
	gets(p1.first_name);
	printf("please enter your last name\n");
	gets(p1.last_name);
	printf("please enter your age.\n");
	scanf("%d",&p1.age);
	printf("please enter your phone number\n");
	gets(p1.phone_number);
	printf("\n");
	printf("please enter your address\n");
	gets(p1.Address);
	fwrite(&p1,sizeof(struct per_info),1,f);
	fclose(f);
}
//----------------------------------------------------------------------------------------------
void group1()
	{
		printf("Here is the link.\n");
		printf("https://www.mentalhealth.org.uk/a-to-z/c/children-and-young-people");
	}
void group2()
	{
		printf("Here is the link.\n");
		printf("https://www.sciencedaily.com/releases/2019/03/190315110908.htm");
	}
void group3()
	{	printf("Here is the link.\n");
		printf("https://www.who.int/mental_health/media/investing_mnh.pdf");
	}
void group4()
	{	printf("Here is the link.\n");
		printf("https://www.who.int/news-room/fact-sheets/detail/mental-health-of-older-adults");
	}
//=================================================================================================	
void article()
{
	int age;
	char ch;
	printf("please select your age.\na.12-17('Teenagers').\nb.18-30('adults')\n.c.30-45('mature-adults').\nd.45-onwards('Older-adults')");
	scanf("%d",&age);
	
		switch(age)
		{
			case 1:
			{
				group1();
				break;
			}
			case 2:
			{
				group2();
				break;
			}
			case 3:
			{
				group3();
				break;
			}
			case 4:
			{
				group4();
				break;	
			}	
		default:
			{
				printf("wrong:input...please try again");
			}			
		}
			
}
//=========================================================================================
int main()
{
	int ch;
	char choice;
	printf("\t\t\tWELCOME TO MENTAL_HEALTH_CLINIC.ORG\n>>We are happy to see you here:");
	printf("our services to you work in 3 ways\n1.A breif article about mental health\n2.Your personal information.");
	printf("\n3.Evaluation of your mental health.\n4.Sending your data to the concerned GP.\n");
	printf(">>Where shall we begin?\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			article();
			break;
		}

		case 2:
		{
			per_info();
			break;
		}
/*			
		case 3:
		{
			eval();
			break;
		}	
		case 4:
		{
			gp_data();
			break;
		}*/
		default:
		{
			printf("ERROR:");
			break;	
		}		
	}		
	return 0;
}
	

