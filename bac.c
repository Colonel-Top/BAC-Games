#include <stdio.h>

	int day=3;
	int cases,choice;
	int count[8];
	int recieve;
	int t1,t2,t3,t4,t5,t6,t7,t8;
	int i,j;
	float average,totalscore,percent;

	

int errors()
{
	printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
}
int printout()
{
	printf("================================= \n");
	printf("Task Activities of the days be at the center \n");
	printf("================================= \n");
	printf("Day %d  \n",day);
	printf("================================= \n");
	printf("1.Wake up \n");
	printf("2.Brushing teeth \n");
	printf("3.Have Breakfast \n");
	printf("4.Lunch \n");
	printf("5.Dinner \n");
	printf("6.Pana times \n");
	printf("7.Talking \n");
	printf("8.Walking \n");
	printf("9.End Day \n");
	printf("================================= \n");
	printf("Enter Number ");
	scanf("%d",&cases);
	if(cases < 1 || cases > 9) 
	{
	
		printf("Error Invalid Input\n");
			printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
		
	}
	else
	//	printf("%d",cases);
	system ("cls");
		if (cases == 1)
 	{
 		
	    if(t1 == 1)
		{
				printf("================================= \n");
				printf("Sorry you can't Edit until Next day \n");
				printf("================================= \n");
				errors();
		}
		else
		{
			printf("================================= \n");
			printf("Wakeup \n Can you place your mind at the center  ?\n");
			printf("Select one \n 5.Always \n 4.Usually \n 3.Sometimes \n 2.Rarely \n 1.Never  \n");
			printf("================================= \n");
			scanf("%d",&recieve);
			printf("Enter Number ");
			if(recieve > 5 || recieve < 0)			
			{
				
					printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
				
					
			}
			else
			{
					t1=1;
				count[1]= recieve;
				printf("Saved ! Press Enter to continue");
				getch();
				system ("cls");
				printout();
			}
		
		}
	}
	else if (cases == 2)
 	{
	    if(t2 == 1)
		{
			printf("================================= \n");
			printf("Sorry you can't Edit until Next day \n");
			printf("================================= \n");
		 	errors();
		}
		else
		{
			printf("================================= \n");
			printf("Brushing Teeth \n Can you place your mind at the center  ?\n");
			printf("Select one \n 5.Always \n 4.Usually \n 3.Sometimes \n 2.Rarely \n 1.Never \n");
			printf("================================= \n");
			printf("Enter Number ");
			scanf("%d",&recieve);
			
			if(recieve > 5 || recieve < 0)			
			{
				
					printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
				
					
			}
			else
			{
					t2=1;
			count[2]= recieve;
				printf("Saved ! Press Enter to continue");
				getch();
				system ("cls");
				printout();
			}
		
		}
	}
	else if (cases == 3)
 	{
	    if(t3 == 1)
		{
				printf("================================= \n");
				printf("Sorry you can't Edit until Next day \n");
				printf("================================= \n");
			 	errors();
		}
		else
		{
			printf("================================= \n");
			printf("Have Breakfast \n Can you place your mind at the center  ?\n");
			printf("Select one \n 5.Always \n 4.Usually \n 3.Sometimes \n 2.Rarely \n 1.Never \n");
			printf("================================= \n");
			printf("Enter Number ");
			scanf("%d",&recieve);
			if(recieve > 5 || recieve < 0)			
			{
				
					printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
				
					
			}
			else
			{
					t3=1;
			count[3]= recieve;
				printf("Saved ! Press Enter to continue");
				getch();
				system ("cls");
				printout();
			}
			
		
		}
	}
	else if (cases == 4)
 	{
	    if(t4 == 1)
		{
				printf("================================= \n");
				printf("Sorry you can't Edit until Next day \n");
				printf("================================= \n");
			 	errors();
		}
		else
		{
			printf("================================= \n");
			printf("Lunch Moment \n Can you place your mind at the center  ?\n");
			printf("Select one \n 5.Always \n 4.Usually \n 3.Sometimes \n 2.Rarely \n 1.Never \n");
			printf("================================= \n");
			printf("Enter Number ");
			scanf("%d",&recieve);
			if(recieve > 5 || recieve < 0)			
			{
				
					printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
				
					
			}
			else
			{
					t4=1;
			count[4]= recieve;
				printf("Saved ! Press Enter to continue");
				getch();
				system ("cls");
				printout();
			}
		
		}
	}
	else if (cases == 5)
 	{
	    if(t5 == 1)
		{
				printf("================================= \n");
				printf("Sorry you can't Edit until Next day \n");
				printf("================================= \n");
			 	errors();
		}
		else
		{
			printf("================================= \n");
			printf("Dinner Moment \n Can you place your mind at the center  ?\n");
			printf("Select one \n 5.Always \n 4.Usually \n 3.Sometimes \n 2.Rarely \n 1.Never \n");
			printf("================================= \n");
			printf("Enter Number ");
			scanf("%d",&recieve);
				if(recieve > 5 || recieve < 0)			
			{
				
					printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
				
					
			}
			else
			{
					t5=1;
				count[5]= recieve;
				printf("Saved ! Press Enter to continue");
				getch();
				system ("cls");
				printout();
			}
		
		}
	}
	else if (cases == 6)
 	{
	    if(t6 == 1)
		{
				printf("================================= \n");
				printf("Sorry you can't Edit until Next day \n");
				printf("================================= \n");
			 	errors();
		}
		else
		{
			printf("================================= \n");
			printf("Pana Moment \n Can you place your mind at the center  ?\n");
			printf("Select one \n 5.Always \n 4.Usually \n 3.Sometimes \n 2.Rarely \n 1.Never \n");
			printf("================================= \n");
			printf("Enter Number ");
			scanf("%d",&recieve);
		if(recieve > 5 || recieve < 0)			
			{
				
					printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
				
					
			}
			else
			{
			
			t6=1;
			count[6]= recieve;
				printf("Saved ! Press Enter to continue");
				getch();
				system ("cls");
				printout();
			}
		}
	}
	else if (cases == 7)
 	{
	    if(t7 == 7)
		{
				printf("================================= \n");
				printf("Sorry you can't Edit until Next day \n");
				printf("================================= \n");
			 	errors();
		}
		else
		{
			printf("================================= \n");
			printf("Talking Moment \n Can you place your mind at the center  ?\n");
			printf("Select one \n 5.Always \n 4.Usually \n 3.Sometimes \n 2.Rarely \n 1.Never \n");
			printf("================================= \n");
			printf("Enter Number ");
		if(recieve > 5 || recieve < 0)			
			{
				
					printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
				
					
			}
			else
			{
					t7=1;
			count[7]= recieve;
				printf("Saved ! Press Enter to continue");
				getch();
				system ("cls");
				printout();
			}
		
		}
	}
	else if (cases == 8)
 	{
	    if(t8 == 8)
		{
				printf("================================= \n");
				printf("Sorry you can't Edit until Next day \n");
				printf("================================= \n");
			 	errors();
		}
		else
		{
			printf("================================= \n");
			printf("Talking Moment \n Can you place your mind at the center  ?\n");
			printf("Select one \n 5.Always \n 4.Usually \n 3.Sometimes \n 2.Rarely \n 1.Never \n");
			printf("================================= \n");
			printf("Enter Number ");
			scanf("%d",&recieve);
			if(recieve > 5 || recieve < 0)			
			{
				
					printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
				
					
			}
			else
			{
					t8=1;
			count[8]= recieve;
				printf("Saved ! Press Enter to continue");
				getch();
				system ("cls");
			printout();
			}
		
		}
	}
	else if (cases == 9)
 	{
	    if(t1+t2+t3+t4+t5+t6+t7+t8 != 0)
		{
			
			for (i = 1;i<9;i++)
			{
				totalscore = totalscore+count[i];
			}
				average = totalscore / 8;
			percent = (totalscore*100)/40;
			printf("Total Score today %.f \n",totalscore);
		
			printf("Average Score today %.2f \n",average);
			printf("Count @ Percent today is %.2f % \n",percent);
				printf("Press enter to exit \n");
				getch();
				system ("cls");
			return 1;
			
		}
		else
		{
			printf("You Didn't Do anything today \n");
				printf("Error Press enter to return to Main menu \n");
					getch();
					system ("cls");
					printout();
		
		}
	}

	
	
}
int main()
{
    t1=0;
    t2=0;
    t3=0;
    t4=0;
    t5=0;
    t6=0;
    t7=0;
    t8=0;
	printout();
	return 0;
	
}

