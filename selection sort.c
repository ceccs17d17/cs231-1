#include<stdio.h>
int main()
{
	int i,j,c,temp,n[25];
	printf("enter the size");
   	scanf("%d",&c);
	printf("Enter elements:");
  	for(i=0;i<count;i++)
      		scanf("%d",&n[i]);
 	for(i=0;i<c;i++)
	{
      		for(j=i+1;j<c;j++)
		{
         		if(n[i]>n[j])
			{
            			temp=n[i];
            			n[i]=n[j];
            			n[j]=temp;
         		}
      		}
   	}
	printf("Sorted elements: ");
   	for(i=0;i<c;i++)
      	printf(" %d",n[i]);
	return 0;
}
