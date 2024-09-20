//student report card
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
struct students 
{ 
char first_Name[50]; 
char last_Name[50]; 
int roll_no; 
char branch[50]; 
float percent; 
} st[100];

int main() 
{ 
	int j=1,n,choice;

	printf("\t\t\t\t\tWELCOME !!\n \t\t\t\tSTUDENT REPORT CARD SYSTEM\n\n\t\t\t\tClick below mentioned options :\n\n");

	while(j<=50)
	{
		printf("Enter your choice (in no.) =>\n\n->1. Add data\n->2. View existing Data\n->3. exit \n ENTER =>\n\n");
		scanf("%d",&choice);

		if(choice==3)
		break;


		switch(choice)
		{

			case 1:
			{
				printf("Enter number of students for entering Data :");
				scanf("%d",&n);

				printf("Enter data of students\n\n"); 
				for (int i = 1; i <=n; i++) 
				{ 

					printf("Enter the data for student #%d\n\n",i);

					printf("Enter first name: "); 
					scanf("%s", st[i].first_Name); 


					printf("Enter last name: "); 
					scanf("%s", st[i].last_Name); 

					printf("Enter Branch: "); 
					scanf("%s", st[i].branch); 

					printf("Enter Roll-No."); 
					scanf("%d", &st[i].roll_no); 

					printf("Enter Percentage: "); 
					scanf("%f", &st[i].percent); 

					printf("================================================\n");
				} 
		

	
				printf("\n"); 
				printf("Displaying the Information: \n"); 

				for (int i = 1; i <=n; i++) 
				{ 
					printf("The information about student number %d",i);

					printf("\nFirst name: "); puts(st[i].first_Name); 

					printf("\nLast name: "); puts(st[i].last_Name); 

					printf("\nRoll_No: %d", st[i].roll_no); 

					printf("\nBranch: "); puts(st[i].branch); 

					printf("\nMarks: %.1f", st[i].percent); 

					printf("\n==================================================\n\n");
				}
			} break; 

			case 2:
			{
				int choice1;
				printf("\n\nEnter your Unique Id : (11 to 20) :");
				scanf("%d",&choice1);

				switch(choice1);
				{
					case 11:
					printf("\n\n\nFirst name : Rahul\nLast name : Gandhi\nRoll no. : 12\nBranch : political Science\nMarks : 500/700\nPercentage : 71.43%");
					break;

					case 12:
					printf("\n\n\nFirst name : Sonia\nLast name : Gandhi\nRoll no. : 21\nBranch : Biology\nMarks : 610/700\nPercentage : 87.14%\n");
					break;

					case 13:
					printf("\n\n\nFirst name : Indira\nLast name : Gandhi\nRoll no. : 31\nBranch : Target Shooting\nMarks : 60/700\nPercentage : 8.57%\n");
					break;

					case 14:
					printf("\n\n\nFirst name : Rajiv\nLast name : Gandhi\nRoll no. : 24\nBranch : assasination-criminology\nMarks : 690/700\nPercentage : 98.65%\n");
					break;

					case 15:
					printf("\n\n\nFirst name : Priyanka\nLast name : Gandhi\nRoll no. : 41\nBranch : Arts(timepass)\nMarks : 650/700\nPercentage : 92.14%\n");
					break;

					case 17:
					printf("\n\n\nFirst name : Arvind \nLast name : Kejrival\nRoll no. : 36\nBranch : Alcoholism\nMarks : 700/700\nPercentage : 100%\n");
					break;

					case 18:
					printf("\n\n\nFirst name : Yogi\nLast name : Adityanaath\nRoll no. : 65\nBranch : Architecture\nMarks : 500/700\nPercentage : 71.42%\n");
					break;

					case 19:
					printf("\n\n\n name : jethalal\nLast name : Gada\nRoll no. : 98\nBranch : Business\nMarks : 660/700\nPercentage : 94.2%\n");
					break;

					case 20:
					printf("\n\n\nFirst name : Majnu\nLast name : bhai\nRoll no. : 78\nBranch : Arts & designing\nMarks : 640/700\nPercentage : 91.42%\n");
					break;

					default:
					printf("hello !");
					break;
				}
			} 

			case 3:
			{
				printf("Exiting..........");
				break;
			}
		}
	 
	}
	return 0;
}
