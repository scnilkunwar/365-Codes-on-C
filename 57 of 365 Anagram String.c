
//	Day 57 of 365
//	Anagram String Check

#include <stdio.h>

int is_anagram(const char *__s1, const char *__s2)
{
	int num1[26] = {0}, num2[26] = {0};
	
	int i = 0;
    while (__s1[i] != '\0')
    {
    	num1[__s1[i] - 'a']++;
        i++;
    }
    
    i = 0;
    while (__s2[i] != '\0')
    {
    	num2[__s2[i] -'a']++;
        i++;
    }
     
    for (i=0;i<26;i++)
    {
    	if (num1[i] != num2[i])
    		return 0;
    }
    
    return 1;
}
     
int main()
{
	char str1[20], str2[20];
    
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
     
    if (is_anagram(str1, str2))
        printf("'%s' and '%s' are anagrams\n", str1, str2);
   else
        printf("'%s' and '%s' are not anagrams\n", str1, str2);
   
    return 0;
}
