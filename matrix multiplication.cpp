#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],m[10][10];
	int i,j,k,sum=0,r,c;
	printf("enter row size:");
	scanf("%d",&r);
	printf("enter column size:");
	scanf("%d",&c);
	printf("enter %d%d element of A:\n",r,c);
	     for(i=0;i<r;i++)
	     {
	     	for(j=0;j<c;j++)
	     	{
	     		scanf("%d",&a[i][j]);
			 }
		 }
		 	printf("enter %d%d element of B:\n",r,c);
	     for(i=0;i<r;i++)
	     {
	     	for(j=0;j<c;j++)
	     	{
	     		scanf("%d",&b[i][j]);
			 }
		 }
		 for(i=0;i<r;i++)
		 {
		 	for(j=0;j<c;j++)
		 	{
		 		sum=0;
		 		for(k=0;k<c;k++)
		 		{
		 			sum=sum+(a[i][k]*b[k][j]);
				 }
				 m[i][j]=sum;
			 }
		 }
		 printf("product of two matrices:");
		 for(i=0;i<r;i++)
		 {
		 	for(j=0;j<c;j++)
		 	{
		 		printf("%d\n",m[i][j]);
			 }
			 printf("\n");
		 }
		 return 0;
}