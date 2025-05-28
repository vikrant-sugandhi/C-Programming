/* Program to count number of lines */
#include <stdio.h>
int main()
{
	int c;
//	c = getchar();
	while((c = getchar()) != EOF)
	{
		putchar(c);
//		c = getchar();
	}
	printf("value of EOF: %d", c);
	/*if((c = getchar()) != EOF)
	{
		printf("1\n");
	}
	else {
		printf("0\n");
	}*/
	
}
