
//    Day 75 of 365
//    Structure as Function Arg

#include <stdio.h>

typedef struct
{
	char *className;
	int totalStudent;
	int noOfBoy;
	int noOfGirl;
} class;

void updateClassDetails(class *loc, class newDetail)
{
	loc ->className = newDetail.className;
	loc ->totalStudent = newDetail.totalStudent;
	loc ->noOfBoy = newDetail.noOfBoy;
	loc ->noOfGirl = newDetail.totalStudent - newDetail.noOfBoy;
}

void printStructure(char *topic, class loc)
{
	printf("\n%s:\n",topic);
    printf("Class Name: %s\n",loc.className);
    printf("Total Students: %d\n",loc.totalStudent);
    printf("No of Boy: %d\n",loc.noOfBoy);
    printf("No of Girl: %d\n",loc.noOfGirl);
}
int main()
{
    class class9 = {"Class 09 Sec 'A'", 80, 45, 35};
    
    printStructure("Class Details", class9);
   
    class newClass = {"Class 10 Sec 'C'", 75, 37};
    updateClassDetails(&class9, newClass);
    
    printStructure("New Class Details", class9);
    return 0;
}


Class Details:
Class Name: Class 09 Sec 'A'
Total Students: 80
No of Boy: 45
No of Girl: 35

New Class Details:
Class Name: Class 10 Sec 'C'
Total Students: 75
No of Boy: 37
No of Girl: 38
