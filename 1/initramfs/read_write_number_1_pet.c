#include <stdio.h>
#include <stdlib.h>
#include "read_write_number.h"
#include <time.h>


int main()
{
	int x=0;
	struct peterson meuPet;
	printf("Ola processo 1\n\n");
        //time_t ltime; /* calendar time */
	while(1) {
		write_turn(0, -1, true);
                meuPet = read_turn();
		while (meuPet.flag[0] == true && meuPet.turn == 0)
		{
			meuPet = read_turn();
		}		
                x = read_number();
                //ltime=time(NULL); /* get current cal time */
                //printf("%s || Processo 1: %d\n",asctime( localtime(&ltime)), x);
                printf("Qualque cosa: %d\n", x);
		sleep(1);
                x++;
                write_number(x);
		write_turn(-1, -1, false);
	}
        return 0;
}
