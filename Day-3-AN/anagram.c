#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool anagarm(char* s,char* t)
{
	int i,j,temp;
	for (i = 0; i < strlen(s) - 1; i++) 
	{
    	for (j = i + 1; j < strlen(s); j++) 
		{
      		if (s[i] > s[j]) 
	  		{
        		temp = s[i];
        		s[i] = s[j];
        		s[j] = temp;
      		}
    	}
  	}
  	for (i = 0; i < strlen(t) - 1; i++) 
	{
    	for (j = i + 1; j < strlen(t); j++) 
		{
      		if (t[i] > t[j]) 
	  		{
        		temp = t[i];
        		t[i] = t[j];
        		t[j] = temp;
      		}
    	}
  	}
  	if (strcmp(s,t)==0) 
	{
        return true;
  	}
  	else
  	{
  		return false;	
	}
}

int main() 
{
  char* s[10],t[10];
  int i, j, temp;

  printf("S = ");
  scanf("%s", s);
  printf("T = ");
  scanf("%s", t);
  
  bool result = anagarm(s, t);
   
  if(result == 1)
  {
  	printf("True");
  }
  else
  {
  	printf("False");
  }

  return 0;
}
