#include <stdio.h>
#include <stdlib.h>
#include "read_write_number.h"
#include <time.h>

int main()
{
	extern bool flag[2];
	extern int turn;
	int x=0;
	printf("Ola processo 1\n\n");
        time_t ltime; /* calendar time */
	while(1) {
		flag[1] = true;
		turn = 0;
		while (flag[0]==true && turn == 0)
		{

		}		
                x = read_number();
                //ltime=time(NULL); /* get current cal time */
                //printf("%s || Processo 1: %d\n",asctime( localtime(&ltime)), x);
                printf("Qualque cosa: %d\n", x);
		sleep(1);
                x++;
                write_number(x);
		flag[1]=false;
	}
        return 0;
}

