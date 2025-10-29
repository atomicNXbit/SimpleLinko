#include <stdio.h>
#include <unistd.h>

#define STACK_BUFFER 4096

int main(){
    printf("SimpleLinko\nPID: %d\nSTACK_BUFFER: %d\n", getpid(), STACK_BUFFER);
    printf("CTRL + C to quit.\n");
    char input[STACK_BUFFER];
    while(1){
        printf("\nurl: ");
        scanf("%4095s", input);

        for(int i = 0; '\0' != input[i]; i++){
            char y = input[i];
            if(y != 46 && y != 58){
                continue;
            }
            else if(y == 46){
                input[i] = 94;
                
            }
            else if(y == 58){
                input[i] = 34;
            }
        }
        printf("\n%s", input);
    }
    pause();
    
    return 0;
    
}
