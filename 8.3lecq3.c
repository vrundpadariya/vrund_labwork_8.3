#include<stdio.h>

main()
{
	int i,j;
	int a[3][3];
	

	
	printf("enter array elements:\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
		
		printf("enter a[%d] a[%d]:",i,j);
		scanf("%d",&a[i][j]);
    }
    }
    
    int sum=0;
    	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(i==j){
			
			 sum+=a[i][j];
}
}
}
    printf("the sum of diagonal elements of array is: %d",sum);
}
   
    
