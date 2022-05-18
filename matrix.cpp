#include<stdio.h>
main(){
	int matrix[3][3]; // 3*3 matrix
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
		printf("element-[%d],[%d]:",i,j);
	    scanf("%d",&matrix[i][j]);//input taken for matrix
										 
        }
    }
    printf("The matrix is\n");
    for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){			
		printf("%d\t",matrix[i][j]);
	    
										 
	  }
	  printf("\n"); 
	}
}