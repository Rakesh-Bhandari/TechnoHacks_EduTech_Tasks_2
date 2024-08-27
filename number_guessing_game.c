#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int logic(int);
int main()
{
	int guess,ch;	
	printf("Number Guessing Game\n");
	while(1)
	{
	    printf("\nEnter your choice(1,2):\n1:Play\t2:Exit\n");
	    scanf("%d",&ch);
	    if (ch==1)
	    {
		    logic(guess);
	    }
	    else if (ch==2)
	    {
	    	break;
	    	return 0;
		}
		else 
		printf("Invalid choice!");
	
    }
}

int logic(int guess)
{
	int num,att=0;
	srand(time(0));
	num=rand()%100+1;
	printf("Guess a number between 1 and 100\n");

	do
	{
		printf("Enter your guess:");
		scanf("%d",&guess);
		att++;
		
		if (guess>num)
		{
			printf("Too high! Try again...\n");	
		}
		
		else if (guess<num)
		{
			printf("Too low! Try again...\n");	
		}
		
		else
		{
			printf("Congratulations! You guessed the correct number in %d attempts.\n",att);	
		}
	}
	while (guess!=num);
}
