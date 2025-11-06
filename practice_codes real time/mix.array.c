/*Q: Write a C program to merge two arrays of size m and n into a single array, then display the merged array.
Example:
Input:  
Array1 = [1, 3, 5]  
Array2 = [2, 4, 6]
Output:  
Merged Array = [1, 3, 5, 2, 4, 6]
*/
#include<stdio.h>
main(){
	int m,n,i,a[100];
	printf("enter array1 size and array 2 size :");
	scanf("%d",&m);
	scanf("%d",&n);
	printf("enter array1 elements :");
		for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\nenter array2 elements :");
		for(i=0;i<m;i++)
	scanf("%d",&a[i]);
		for(i=0;i<m;i++)
	printf("%d ",a[i]);
	printf("\nmixed elements\n");
	for(i=0;i<m+n;i++)
	printf("%d ",a[i]);
	
}
