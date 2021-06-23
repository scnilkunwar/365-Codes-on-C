
//	Day 71 of 365
//	Basic Structure

#include <stdio.h>

struct book //	book structure tag
{
	//	members
	char *title;
	int pageNo;
	float price;
};

int main()
{
	struct book book1 = {"Quantum Physics", //	book1 is
			 			 565,			    //	book type 
			 			 450.5};		    //	varialbe
			 			 
	struct book book2 = {"Econophysics",
						 250,
						 175.5};
						 
	printf("Book Details:\n");
	printf("Title \t\t\t\t Page No. \t Price\n");
						 
	printf("%s \t %d \t\t %.2f\n",book1.title, book1.pageNo, book1.price); //	accessing member of book1
						 
	printf("%s \t %7d \t\t %.2f",book2.title, book2.pageNo, book2.price);
	return 0;
}
