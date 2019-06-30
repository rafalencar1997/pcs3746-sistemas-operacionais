#include <fcntl.h>
#include <stdio.h> 
#include <stdlib.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <unistd.h> 
 
int main() 
{ 
        int fdc = open("/sys/waiting_key", O_RDONLY); 
 
        char pids_queue[5];
         
        while(1) { 
                if (lseek(fdc, 0, SEEK_SET)) { 
                        perror("lseek"); 
                } else { 
                        int sizec = read(fdc, pids_queue, 4); 
                        if (sizec < 0){ 
                                perror("read queue"); 
                        } else { 
                                pids_queue[sizec] = 0; 
                                printf("\n---Blocked PIDs monitor---\n"); 
                                printf("Stack item count: %s\n", pids_queue); 
                        }
                } 
                sleep(10);
        } 
        return 0; 
}

