#include <stdio.h>
int main() {
    int bt[3]={6,2,4}, wt[3]={0}, i;
    wt[1]=bt[0];
    wt[2]=bt[0]+bt[1];
    for(i=0;i<3;i++)
        printf("P%d WT=%d\n",i+1,wt[i]);
    return 0;
}

