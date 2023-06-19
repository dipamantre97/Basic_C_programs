//how data will stored in memory there are two types
//little endians=> lower byte stored first
//big endian => higher bytes will store first
//

#include<stdio.h>
/*int main()
{
	unsigned int a =0x12345678;
        char *c=(char *)&a;
	for(int i=0;i<4;i++)
	{
		printf("address=%p,value=%x\n",&c[i],c[i]);
		
	}
	return 0;
}
*/

//to check system is little endian or big endian
//
#include<stdio.h>
	int main()
{
        unsigned int a =0x1;
        char *c=(char *)&a;
        
        if(*c==1)
                printf("little endian\n");
	else
		printf("big endian\n");

        
        return 0;
}

