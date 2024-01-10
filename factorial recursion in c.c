#include<stdio.h>
#include<conio.h>
int factorial(int n)
{ 
    	if(n==0)
	    {
		   return 1;
	    }
	    else
	    {
		   return n*factorial(n-1);
	    }
}
int main()
{
	int y;
	printf("ENTER YOUR NUMBER:\n");
	scanf("%d",&y);
	printf("THE FACTORIAL OF NUMBER IS %d",factorial(y));
	return 0;
}

