#include <unistd.h>
#include <stdio.h>

int main() {

    printf("Start program: \n");
    __pid_t pid = fork();  // Create a new process

    if (pid == 0) {  // Child process
        printf("Child process: My PID is %d, Parent PID is %d\n", getpid(), getppid());
    } else if (pid > 0) {  // Parent process
        printf("Parent process: My PID is %d, Child PID is %d\n", getpid(), pid);
    } else {  // Error
        printf("Fork failed!\n");
    }

    return 0;
}