#include <stdio.h>
void print(void *param);


int main()
{
    	char* msg_menu = "\n========================\n"
							"|         Menu         |\n"
							"========================\n"
								"LED effect    ----> 0\n"
								"Date and time ----> 1\n"
								"Exit          ----> 2\n"
								"Enter your choice here : \n";

        print(&msg_menu);
        
        printf("\n\n");
        
        print(msg_menu);


        return 0;


}


void print(void *param)
{
    printf("%s",(char *)param);

}

