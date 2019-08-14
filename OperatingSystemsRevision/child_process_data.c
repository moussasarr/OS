#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int value = 5;

int main(){
	pid_t pid;
	pid = fork();

	if (pid == 0){ /*Child process */
      value += 5;
	}

	else if (pid > 0){ /*Parent Process */
	  wait(NULL);
      printf("PARENT: value = %d\n", value ); /*line A*/
      return 0;
	}
}
