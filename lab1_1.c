#include<stdio.h>
int main()
{
	int i,j, c=0, u[100], temp ;
	
	
// Input for set A:

    int a[100],n;
	printf("Enter the length of sets A:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf("Enter the elements of sets A:\n");
	    scanf("%d",&a[i]);
	}
	
	
// Arranging Set A elements in ascending order:

	for(i=0;i<n-1;i++)
	      {
		   for(j=0;j<n-i-1;j++)
                {
                	
    	         if(a[j] > a[j+1])
	             {
			        temp=a[j];
        		    a[j]=a[j+1];
    		        a[j+1]=temp;
		         }
	           }
	       }
	     
	      

	
//  Input for Set B:

    int b[100], l;
	printf("\nEnter the length of sets B:\n");
	scanf("%d",&l);
	for(j=0;j<l;j++)
	{
	    printf("Enter the elements of sets B:\n");
	    scanf("%d",&b[j]);
	}
		
	


//  Arranging Set B elements in ascending order:

    for(i=0;i<l-1;i++)
	      {
		   for(j=0;j<l-i-1;j++)
                {
    	         if(b[j]>b[j+1])
	             {
			        temp=b[j];
        		    b[j]=b[j+1];
    		        b[j+1]=temp;
		         }
	           }
	       }
   
// INTERSECTION of the Sets:	 
	int count=0, int_[20]; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[i]==b[j])
			{
				int_[i]=a[i];
				count++;
				break;
			} 				
		}
	}
	 

			  		
     for(i=0;i<count;i++)
   {
   		printf("%d",int_[i]);
	
   }

	 	
}
