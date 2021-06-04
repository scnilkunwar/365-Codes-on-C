#include <stdio.h>
#define NOR(x, y) !(x|y)

int AND_NOR(int a, int b)
{
	int c = NOR(a, a);
	int d = NOR(b, b);
	return NOR(c, d);
}

int OR_NOR(int a, int b)
{
	int c = NOR(a, b);
	return NOR(c, c);
}

int NOT_NOR(int a)
{
	return NOR(a, a);

}

int NAND_NOR(int a, int b)
{
	int c = AND_NOR(a, b);
	return NOR(c, c);
}

int XOR_NOR(int a, int b)
{
	int c = NOR(a, b);
	int d = NOR(a, c);
	int e = NOR(b, c);
	int f = NOR(d, e);
	return NOR(f, f);
}

int XNOR_NOR(int a, int b)
{
	int c = NOR(a, b);
	int d = NOR(a, c);
	int e = NOR(b, c);
	return NOR(d, e);
}

void logic_table(char gate_name[4], int output[], char operation_symbol[5])
{
	printf("Truth Table of %s Gate\n",gate_name);
	printf(" _______________________\n");
	printf("|\tInput\t|  Output   |\n");
	printf("|-----------|-----------|\n");
	printf("|  A  |  B  | C = %-5s |\n",operation_symbol);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("|-----|-----|-----------|\n");
			printf("|  %d  |  %d  |     %d     |\n", i, j, output[i+j+i]);
		}
	}
	printf(" -----------------------\n\n");
}

int main()
{
	int output[4], k;
	char *name[6] = {"AND", "OR", "NOT", "NAND", "XOR", "XNOR"};
	char *operation[6] = {"A.B", "A+B", "~A", "~A.B", "A(+)B", "A(-)B"};
	
	printf("Choose Logic Gate\n");
	
	for(int i=0;i<6;i++)
		printf("%-4s    [%d]\n",name[i],i+1);
	
	scanf("%d",&k);
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			if(k == 1)
				output[i+j+i] = AND_NOR(i, j);
			else if(k == 2)
				output[i+j+i] = OR_NOR(i, j);
			else if(k == 3)
				output[i+j+i] = NOT_NOR(i);
			else if(k == 4)
				output[i+j+i] = NAND_NOR(i, j);
			else if(k == 5)
				output[i+j+i] = XOR_NOR(i, j);
			else if(k == 6)
				output[i+j+i] = XNOR_NOR(i, j);
		}
	}
	
	logic_table(name[k-1], output, operation[k-1]);
	return 0;
}
