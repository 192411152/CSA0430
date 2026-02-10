#include <stdio.h>
int main() {
    int bt[3]={4,3,2}, pr[3]={2,1,3}, wt[3]={0};
    wt[1]=bt[0];
    wt[2]=bt[0]+bt[1];
    for(int i=0;i<3;i++)
        printf("P%d WT=%d\n",i+1,wt[i]);
    return 0;
}

