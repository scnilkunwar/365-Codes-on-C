
//	63 of 365
//	Guess Number Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void title()
{
	printf("  ++-----------------------------------------------++\n");
	printf("  ++-----------------------------------------------++\n");
	printf("  ||\t  ooo    o   o   ooooo    oooo    oooo     ||\n");
	printf("  ||\t o   o   o   o   o       o       o         ||\n");
	printf("  ||\t o       o   o   o       o       o         ||\n");
	printf("  ||\t o    o  o   o   oooo     ooo     ooo      ||\n");
	printf("  ||\t  ooo o  o   o   o           o       o     ||\n");
	printf("  ||\t      o  o   o   o           o       o     ||\n");
	printf("  ||\t      o   ooo    ooooo   oooo    oooo      ||\n");
	printf("  ||\t                                           ||\n");
	printf("  ||\t\t Guess a Number Between 0-99           ||\n");
	printf("  ++-----------------------------------------------++\n");
	printf("  ++-----------------------------------------------++\n");
	
}

void loss()
{
	printf("  ++-----------------------------------------------++\n");
	printf("  ++-----------------------------------------------++\n");
	printf("  ||\t o         oooo      oooo     oooo         ||\n");
	printf("  ||\t o        o    o    o        o             ||\n");
	printf("  ||\t o        o    o    o        o             ||\n");
	printf("  ||\t o        o    o      ooo      ooo         ||\n");
	printf("  ||\t o        o    o         o        o        ||\n");
	printf("  ||\t o        o    o         o        o        ||\n");
	printf("  ||\t ooooo     oooo      oooo     oooo         ||\n");
	printf("  ||\t                                           ||\n");
	printf("  ||\t\t\t\t  Try Again !!!                ||\n");
	printf("  ++-----------------------------------------------++\n");
	printf("  ++-----------------------------------------------++\n");
	
}

void win()
{
	printf("  ++-----------------------------------------------++\n");
	printf("  ++-----------------------------------------------++\n");
	printf("  ||   o               o    ooooooo    oo      o   ||\n");
	printf("  ||   o               o       o       o o     o   ||\n");
	printf("  ||    o             o        o       o  o    o   ||\n");
	printf("  ||     o     o     o         o       o   o   o   ||\n");
	printf("  ||      o   o o   o          o       o    o  o   ||\n");
	printf("  ||       o o   o o           o       o     o o   ||\n");
	printf("  ||        o     o         ooooooo    o      oo   ||\n");
	printf("  ||\t                                           ||\n");
	printf("  ||\t\t\t  Congratulations !!!              ||\n");
	printf("  ++-----------------------------------------------++\n");
	printf("  ++-----------------------------------------------++\n");
	
}

int main()
{
	srand(time(NULL));
	int num, guess, i;
	num = rand()%100;
	
	title();
	
	for(i=5;i>0;i--)
	{
		printf("\t%d guess ramaining!!\n",i);
		printf("\tGuess: ");
		scanf("%d",&guess);
		
		if(guess > num)
			printf("\n\tguess is high!!\n\n");
		
		else if(guess < num)
			printf("\n\tguess is low!!\n\n");
		
		else
		{
			printf("\n\tyou guessed it!!\n");
			win();
			break;
		}
	}
	if(i == 0)
	{
		printf("\tNumber was %d\n",num);
		loss();
	}
	
	return 0;
}
