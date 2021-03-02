#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <pthread.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
	printf("Starting Program!\n");

	int pid = fork();
	if (pid == 0)
	{ 
		pid = fork(); // Create a child zombie
		if (pid == 0) {
			printf("Zombie process %i of the child process\n", getpid());
			exit(10);
		} else {
			printf("Child process %i is running!\n", getpid());
			sleep(10);  // wait 10s 
			printf("Child process %i is exiting!\n", getpid());
			exit(0);
		}
	}
	else if (pid > 0)
	{
		pid = fork();
		if (pid == 0) {
			printf("Zombie process %i from the parent process\n", getpid()); 
		} else {
			printf("Parent process %i...\n", getpid());
			sleep(5);
			printf("Parent process will crash with segmentation failt!\n");
			int* p = 0;
			p = 10;
		}
	}
	else perror("fork()");
	exit(-1);
}
