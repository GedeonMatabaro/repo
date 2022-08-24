/*
Transpose the matrix and store it into another matrix
2.Transpose a matrix into itself
*/
#include<stdio.h>
void main(){
    int MA[5][5],MB[5][5];
    int i,j,n,m;
    printf("Enter the size of the matrix MA <= [5][5] ");
    scanf("%d %d",&m,&n);
    printf("\n Enter the element of the matrix B: \n");
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&MA[i][j]);	
        }
    }
    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            MB[i][j]=MA[j][i];
        }
    }
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
                printf("%2d ",MA[i][j]);
        }
            printf("\n\t");
    }
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
                printf("%2d ",MB[i][j]);
        }
            printf("\n\t");
    }

}
