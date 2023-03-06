# include <stdio.h>
# include <stdlib.h>
// DSA QUE
//Find pair with given sum in the array

int main()
{
	int arr[] = {8, 7, 2, 5, 3, 1};
	
	    for(int j =0 ;j<6 ;j++)
	    {
	        printf(" %d ",arr[j]);
	     } 
	
	int target;
	printf("\nEnter The Target : ");
	scanf("%d",&target);
	for(int i = 0; i<6;i++)
	{
	    for(int j = 5; j>0+i;j--)
	    {
	        if(i !=j)
	        {
	        if(arr[i]+arr[j]==target)
	            {
	            printf("\nPairs : {%d,%d}",arr[i],arr[j]);
	            }
	         
	         }
	    }
	}

}