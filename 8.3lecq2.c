#include<stdio.h>
main()
{
	int i,j;
	int a[3][3];
	

	
	printf("enter array A elements:\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		
		printf("enter a[%d] a[%d]:",i,j);
		scanf("%d",&a[i][j]);
    }
    }
    
 
	int b[3][3];
	
	printf("enter array B elements:\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		
		printf("enter b[%d] b[%d]:",i,j);
		scanf("%d",&b[i][j]);
    }
    }
    
    
    int c[3][3];
    printf("array c is\n");
    for(i=0;i<=2;i++){
    	
	for(j=0;j<=2;j++){
			
	c[i][j]=a[i][j]+b[i][j];
			
	printf(" %d ",c[i][j]);
	}
	printf("\n");
}
		
}
