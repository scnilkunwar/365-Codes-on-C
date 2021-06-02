#include <stdio.h>

//defining logic
#define AND(x, y) x&y
#define OR(x, y) x|y
#define NOT(x) !x
#define NAND(x, y) !(x&y)
#define NOR(x, y) !(x|y)
#define XOR(x, y) x^y
#define XNOR(x, y) !(x^y)

void logic_table(char gate_name[4], int arr[], char operation[5])
{
	printf("Truth Table of %s Gate\n",gate_name);
	printf(" _______________________\n");
	printf("|\tInput\t|  Output   |\n");
	printf("|-----------|-----------|\n");
	printf("|  A  |  B  | C = %-5s |\n",operation);
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("|-----|-----|-----------|\n");
			printf("|  %d  |  %d  |     %d     |\n", i, j, arr[i+j+i]);
		}
	}
	printf(" -----------------------\n");
}

int main()
{
	int output[4], k;
	char *name[7] = {"AND", "OR", "NOT", "NAND", "NOR", "XOR", "XNOR"};
	char *operation[7] = {"A.B", "A+B", "~A", "~A.B", "~A+B", "A(+)B", "A(-)B"};
	
	printf("Choose Logic Gate\n");
	
	for(int i=0;i<7;i++)
		printf("%-4s    [%d]\n",name[i],i);
	
	scanf("%d",&k);
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(k == 0)
				output[i+j+i] = AND(i, j);
			else if(k == 1)
				output[i+j+i] = OR(i, j);
			else if(k == 2)
				output[i+j+i] = NOT(i);
			else if(k == 3)
				output[i+j+i] = NAND(i, j);
			else if(k == 4)
				output[i+j+i] = NOR(i, j);
			else if(k == 5)
				output[i+j+i] = XOR(i, j);
			else if(k == 6)
				output[i+j+i] = XNOR(i, j);
		}
	}
	
	logic_table(name[k], output, operation[k]);
	return 0;
}
