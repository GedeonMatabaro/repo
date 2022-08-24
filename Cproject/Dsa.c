#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void main() {
//	int numbers[100],n, i, min=0, max=0;
//	printf("Enter the size of numbres : \n");
//	scanf("%d",&n);
//	printf("Enter the numbers : \n");
//	for(i=0;i<n;i++){
//		scanf("%d",&numbers[i]);
//	}
//	printf("\n");
//	for (i=0;i<n;i++){
//		printf("%d ",numbers[i]);
//	}
//	max=numbers[0];
//	min=numbers[0];
//	for (i=1;i<n;i++){
//		if (numbers[i]>max){
//			max=numbers[i];
//		}
//		if (numbers[i]<min){
//			min=numbers[i];
//		}
//		
//	}
//	printf("\nthe large number is %d\n",max);
//	printf("\nthe small number is %d\n",min);
//}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//   char s[100];
//   int i;
//   printf("\nEnter a string : ");
//   gets(s);
//
//   for (i = 0; s[i]!='\0'; i++) {
//      if(s[i] >= 'a' && s[i] <= 'z') {
//         s[i] = s[i] - 32;
//      }
//   }
//   printf("\nString in Upper Case = %s", s);
//   return 0;
//}
//void main() {
//	int a[10],b[10],c[10],m,n,i,j,k=0;
//	printf("Enter the size of a and b : \n");
//	scanf("%d%d",&m,&n);
//	printf("Enter the element to array a :\n");
//	for (i=0;i<m;i++){
//		scanf("%d",a[i]);
//	}
//	printf("Enter the element to array b :\n");
//	for (i=0;i<n;i++){
//		scanf("%d",&b[i]);
//	}
//	for(i=0;i<m+n;i++){
//		if(i<m) c[i]=b[i];
//		else c[i]=b[k++];
//	}
//	for(i=0;i<m+n;i++){
//		printf("%d ,",c[i]);
//	}
//}
//SATYARANJAN
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//@Q1
//void main() {
//	char name[50];
//	printf("Enter the name: ");
//	scanf("%s",name);
//	int i=0, k=0;
//	for (i=0;name[i]!=0;i++){
//		k++;	
//	}
//	printf("the size of the name is %d",k);
//}
// C Program to Insert an element
// at a specific position in an Array

#include <stdio.h>

int main()
{
	int arr[100];
	int i, x=13, pos, n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: \n");
	for (i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the position to insert in the array: ");
	scanf("%d",&pos);
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	n++;
	for (i = n-1; i >= pos; i--)
		arr[i] = arr[i - 1];
	arr[pos - 1] = x;
	// print the updated array
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

//void main() {
//	int numbers[20],n, i;
//	printf("Enter the size of numbres : \n");
//	scanf("%d",&n);
//	printf("Enter the numbers : \n");
//	for(i=0;i<n;i++){
//		scanf("%d",&numbers[i]);
//	}
//	printf("The array is \n");
//	for (i=0;i<n;i++){
//		printf("%d ",numbers[i]);
//	}
//}
//@Q2
//void main() {
//	int numbers[20],n, i, k=0;
//	printf("Enter the size of numbres : \n");
//	scanf("%d",&n);
//	printf("Enter the numbers : \n");
//	for(i=0;i<n;i++){
//		scanf("%d",&numbers[i]);
//	}
//	printf("\n");
//	for (i=0;i<n;i++){
//		printf("%d ",numbers[i]);
//	}
//	for (i=1;i<n;i++){
//		if (numbers[i]<numbers[i-1]){
//			numbers[i]=numbers[i-1];
//		}
//		k=numbers[i];
//	}
//	printf("/nthe great number is %d",k);
//}
//@Q3
//#include <stdio.h>
//
//int main() {
//    int a[10], n;
//    int largest1, largest2, i;
//
//    printf("enter number of elements you want in array");
//    scanf("%d", &n);
//    printf("enter elements");
//    for (i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    largest1 = a[0];
//    for (i = 0; i < n; i++) {
//        if (a[i] > largest1) {
//            largest1 = a[i];
//        }
//    }
//    largest2 = a[0];
//    for (i = 1; i < n; i++) {
//        if (a[i] > largest2 && a[i] < largest1)
//            largest2 = a[i];
//    }
//    printf("First and second largest number is %d and %d ", largest1, largest2);
//}
//@ ASS2 Q1
//write a c program gto read element into an array and find the largest 2 elements
//void main() {
//	int numbers[20],n, i, j, k=0;
//	printf("Enter the size of numbres : \n");
//	scanf("%d",&n);
//	printf("Enter the numbers : \n");
//	for(i=0;i<n;i++){
//		scanf("%d",&numbers[i]);
//	}
//	//printing the array in the form : {a1, a2, a3, ..., an}
//	/*printf("{\n");
//	for (i=0;i<n;i++){
//		printf("%d",numbers[i]);
//		if(i!=(n-1)) printf(", ");
//	}	
//	printf("}\n");
//	*/
//	// sort the array
//	for (i=0;i<n-1;i++){
//		for (j=i+1;j<n;j++){
//			if (numbers[j]<numbers[i]){	
//				k=numbers[j];
//				numbers[j]=numbers[i];
//				numbers[i]=k;
//			}
//		}
//		
//	}
//	//printing the sorted array in the form : {a1, a2, a3, ..., an}
//	/*printf("{\n");
//	for (i=0;i<n;i++){
//		printf("%d",numbers[i]);
//		if(i!=(n-1)) printf(", ");
//	}
//	printf("}\n");
//	*/
//	printf("\nthe two greatest number are %d and %d",numbers[n-2],numbers[n-1]);
//}
//@ASS Q2s
//void main() {
//	char name[50];
//	printf("Enter the name: ");
//	scanf("%s",name);
//	char copy[50];
//	int i, j=0, k=0;
//  // taking the lenght of the array
//	for (i=1;name[i]!=0;i++){
//		k++;	
//	}
//	for (i=k;i>=0;i--){
//		copy[j]=name[i];
//		j++;
//	}
//	printf("The name is: %s",copy);
//}
//@ASS2 Q3
//void main() {
//	char numbers[50];
//	int i, n, sum=0;
//	printf("Enter the size of the array: ");
//	scanf("%d",&n);
//	printf("Enter the elements of the array: /n");
//	for (i=0;i<n; i++){
//		scanf("%d",&numbers[i]);
//		sum += numbers[i];	
//	}
//	printf("The sum is: %d",sum);
//}