#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int status = system("cc ex2.test.c -o ex2");

        if (status == -1)
        {
                printf("Failed to execute cc command\n");
                return 1;
        }
        else if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
        {
                printf("Compilation successful\n");
                system("./ex2");
                system("rm ex2");
                return 0;
        }
        else
        {
                printf("Compilation failed\n");
                return 1;
        }
}