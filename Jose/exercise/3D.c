#include<stdio.h>
int main()
{
int i,j,k;
int _3D[10][10][10];

int n;
printf("Enter the number of rows: ");
scanf("%d",&n);
int *ptr[10][10][10];
ptr[0][0][0]=&_3D[0][0][0];

for(i=0;i<n;i++){
for(j=0;j<n;j++){
for(k=0;k<n;k++){
printf("3D[%d][%d][%d]: ",i,j,k);
scanf("%d",&ptr[i][j][k]);
}
printf("\n");
}
printf("\n");
}
printf("Your Entry: \n");
for(i=0;i<n;i++){
for(j=0;j<n;j++){
for(k=0;k<n;k++){
printf("%d\t",ptr[i][j][k]);
}
printf("\n");
}
printf("\n");
}

return 0;
}
