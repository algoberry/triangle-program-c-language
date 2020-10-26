#include<stdio.h>
int main() {
	int triangleHeight = 0;
	int triangleWidth = 0;
	
	int middlePoint = 0;
	int startPoint = 0;
	int endPoint = 0;
	
	int outerLoop = 0;
	int innerLoop = 0;
	
	printf("Please enter the triangle Height:");
	scanf("%d",&triangleHeight);
	if(triangleHeight >= 2) {
		
		triangleWidth = triangleHeight * 2;
		if(triangleWidth%2 == 1)
		{	triangleWidth++;	}
		
		middlePoint = triangleWidth/2;
		startPoint = middlePoint;
		endPoint = middlePoint;
		
		for(outerLoop=1;outerLoop<=triangleHeight;outerLoop++) {
			for(innerLoop=1;innerLoop<=triangleWidth;innerLoop++) {
				if(startPoint <= innerLoop && innerLoop <= endPoint) 
				{	printf("*");	}
				else
				{	printf(" ");	}
			}
			startPoint--;
			endPoint++;
			printf("\n");
		}
	}
	return 0;
} 
