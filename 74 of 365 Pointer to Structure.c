
//	Day 74 of 365
//	Pointer to Structure

#include <stdio.h>

typedef struct
 {
 	char *name;
 	int age;
 	float height;
 	char *grade;
 } info;
 
 int main()
 {
 	info myInfo = {"Sunil Kunwar",
 		           22,
 		           172.5,
 		           "B.Sc. 4th Year"};
 		           
 	info *infoPtr;
 
 	infoPtr = &myInfo;
 		           
 	printf("My Info:\n");
 	printf("Name: %s\n",infoPtr ->name);
 	printf("Age: %d\n",infoPtr ->age);
 	printf("Height: %.2f cm\n",infoPtr ->height);
 	printf("Grade: %s",infoPtr ->grade);
 	return 0;
 }