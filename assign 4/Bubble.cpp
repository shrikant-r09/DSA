#include <stdio.h>
void main()
{ 
	 int a[10], n, i, j, temp;  
	printf("\n Enter number of elements: ");
	scanf("%d", &n); 
	 printf("\n Enter %d integers\n", n);  
	for (i = 0; i < n; i++)    
	scanf("%d", &a[i]);  
	for (i = 0 ; i < n - 1; i++)  
	{    
		for (j = 0 ; j < n - i - 1; j++)    
		{     
			 if (a[j] > a[j+1])    
 			  {     
  				 temp  = a[j];       
				 a[j]   = a[j+1];        
				a[j+1] = temp;     
			 }    
		}  
	}  
	printf("Sorted list in ascending order:\n");
	 for (j = 0; j < n; j++)     
	printf("%d ", a[j]);  return 0;
}
