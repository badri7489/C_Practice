#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main() {
    pid_t process_id, p_process_id;

    process_id = getpid();
    p_process_id = getppid();

    printf("The process id: %d\n", process_id);
	printf("The process id of parent function: %d\n", p_process_id);
    
    return 0;
}