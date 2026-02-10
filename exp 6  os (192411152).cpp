#include <stdio.h>
int main() {
    int bt[3]={5,3,1}, wt[3]={2,1,0};
    for(int i=0;i<3;i++)
        printf("P%d WT=%d\n",i+1,wt[i]);
    return 0;
}

