/*
Q1. Define an array of size n. Input
Q1. Define two array of size n respectively. In put the daata in sorted order in bothe the arrays. Fefine another array of size m+n. 
Write the program to copy th edata from the first two arrays into the third arrau in such a way that the third array will be in sorted order. Do not sort the third array. 
*/
#include<stdio.h>
#include<stdlib.h>
void main(){
    int m,n,i=0,j=0,k=0,com;
    printf("Enter the size of the first array: ");
    scanf("%d",&m);
    int A[m];
    printf("\nEnter the element of the first array\n");
    for(i=0;i<m;i++){
        scanf("%d",&A[i]);
    }
    printf("\nEnter the size of the second array: ");
    scanf("%d",&n);
    int B[n];
    printf("Enter the element of the second array :/n");
    for(i=0;i<m;i++){
        scanf("%d",&B[i]);
    }
    int C[m+n];
while (i<m&&j<n)
{
    if(A[i]<B[j]){
        C[i]=A[i];
        K++;
    }
}


}