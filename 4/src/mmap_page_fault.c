#include <ctype.h>
#include <fcntl.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int main()
{
	//printf("\n\n Esse e o valor: %s\n\n Esse eh o argc, ta bom agora?? %d \n\n\n", argv[1], argc);
	//int FREE_SIZE = atoi(argv[1]);
	int FREE_SIZE = 30000;
	int MAX_SIZE = FREE_SIZE * 1024 / 3;
	printf("\nAlocando array\n");
	int *array = malloc(MAX_SIZE * sizeof(int));
	printf("Populando array...\n");
	for (int i=0; i < MAX_SIZE; i++)
	{
		array[i]=i;
	//	if(i % 500000 == 0)
		printf("%d\n", i);
	}
	printf("Array criado: %zu\n", sizeof(array));
	return 0;
}
