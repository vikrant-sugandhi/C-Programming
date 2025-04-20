#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


typedef struct node{
	int data_1;
	int data_2;
	struct me *link;
}node_s;


int main(void)
{
	node_s me;
	node_s *ptr = NULL;
	ptr = (node_s *)malloc(1*sizeof(node_s));

	printf("%p\n", ptr);

	return 0;
	

}


