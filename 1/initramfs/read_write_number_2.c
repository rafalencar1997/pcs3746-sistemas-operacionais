#include <stdio.h>
#include <stdlib.h>
#include "read_write_number.h"

int main()
{

	int x=0;
	printf("Ola processo 2\n\n");
        time_t ltime; /* calendar time */
	while(1) {
 
		x = read_number();
		//ltime=time(NULL); /* get current cal time */
		//	printf("%s || Processo 2: %d\n",asctime( localtime(&ltime)), x);
		printf("%d\n", x);
		sleep(1);
		x++;
		write_number(x);
	}
        return 0;
}

