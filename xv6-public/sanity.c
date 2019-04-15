//
//  sanity.c
//  
//
//  Created by Kyra Thompson on 4/14/19.
//

#include "types.h"
#include "user.h"
int main()
{
    int i;
    for (i = 0; i <= 20; i++){
        if (fork() == 0){
            printf("child with pid %d from parent pid %d \n", child->pid, parent->pid );
            exit(0);
        }
    }
    for (int i = 0; i <= 20; i++){
        wait(NULL);
    }
}
main();
