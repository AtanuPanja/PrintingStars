#include<stdio.h>
int main(int argc, char *argv[])
{
	int choice,row;
	printf("Enter 0 for Triangular Pattern and 1 for Reverse Triangilar Pattern\n");
	printf("Enter your choice\t");
	scanf("%d",&choice);
	printf("Enter number of rows you want\t");
	scanf("%d",&row);
	
	if(choice == 0)
	{
		printf("Triangular Star Pattern of %d rows is :-\n",row);
		for(int r = 1; r <= row; r++)
		{
			for(int c = 1; c <= r; c++)
			printf("* ");
		printf("\n");
		}
	}
	else if(choice == 1)
	{
		printf("Reversed Triangular Star Pattern of %d rows is :- \n",row);
		for(int r = row; r >= 1; r--)
		{
			for(int c = 1; c <= r; c++)
			printf("* ");
		printf("\n");
		}
	}
}