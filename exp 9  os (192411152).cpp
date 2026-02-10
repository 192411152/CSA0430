#include <stdio.h>
int main() {
    int shared=10;
    printf("Process 1 writes %d\n",shared);
    shared+=5;
    printf("Process 2 reads %d\n",shared);
    return 0;
}

