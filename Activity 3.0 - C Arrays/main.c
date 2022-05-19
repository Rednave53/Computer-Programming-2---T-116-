#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[100];
    int i, n, sum=0;



       printf("Enter the size of the Array: ");
       scanf("%d",&n);


       for(i=1;i<n+1;i++)
        {
	      printf("Enter Element %d : ",i);
	      scanf("%d",&a[i]);
	    }

    for(i=1; i<n+1; i++)
    {
        sum += a[i];
    }

    printf("Sum of all array elements = %d\n\n", sum);
}

