
//	Day 61 of 365
//	Boolean in C

#include <stdio.h>
#include <stdbool.h>

bool is_alpha(const char __ch)
{
	if(__ch >= 'a' && __ch <= 'z' || __ch >= 'A' && __ch <= 'Z')
		return true;
	
	return false;
}

int main()
{
	char ch[] = {'a', '5', 'G', '?', 'y', '@'};
	
	for(int i=0;i<6;i++)
	{
		printf("test 0%d --> ",i+1);
		
		if(is_alpha(ch[i]))
			printf("'%c' is alphabet\n",ch[i]);
		
		else
			printf("'%c' is not alphabet\n",ch[i]);
	}
	
	return 0;
}
