#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=14;i++){
        for(j=1;j<=14;j++){
            printf("\n%d x %d=%d",j,i,i*j);
        }
        printf("\n");
    }
}
