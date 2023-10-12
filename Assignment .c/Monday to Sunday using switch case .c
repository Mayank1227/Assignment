//Monday to Sunday using switch case 
#include<stdio.h>
int main()
{
	int week;
	printf("enter a week number:");
	scanf("%d",& week);
	switch(week)
	{
		case 1:
		printf("Monday");
		break;
		
		case 2:
		printf("Thusday");
		break;
		
		case 3:
		printf("Wensday");
		break;
		
		case 4:
		printf("Friday");
		break;
		
		case 5:
		printf("Friday");
		break;
		
		case 6:
		printf("Saturday");
		break;
		
		case 7:
		printf("Sunday");
		break;
		
		defacult:
		ptintf("error");
		
	}
	  return 0;
}
