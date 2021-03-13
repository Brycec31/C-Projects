#include <stdio.h>
#include <math.h>

//Made by Bryce Cooke
//
//please compile using "gcc -lm coordinate.c"

void main(){
	int startX, startY, endX, endY;
	printf("   N  \n");
	printf("   |  \n");
	printf("W--+--E\n");
	printf("   |  \n");
	printf("   S  \n");
	printf("    Y  \n");
	printf("    |  \n");
	printf("-X--+--X\n");
	printf("    |   \n");
	printf("   -Y   \n");
	printf("Welcome! This program accepts two points and \ncalculates the direction of the fastest route.\nPlease enter integer values only.\n");
	printf("Enter start X-coordinate: ");       //reads starting coordinates
	scanf("%d", &startX);
	printf("Enter start Y-coordinate: ");
	scanf("%d", &startY);
	printf("Enter destination X-coordinate: "); //reads destination coordinates
	scanf("%d", &endX);
	printf("Enter destination Y-coordinate: ");
	scanf("%d", &endY);

	double xDiff = endX - startX;     //calculates differences between
	double yDiff = endY - startY;     //coordiantes
	double degrees = 0;
	if(xDiff != 0 && yDiff != 0){  //if applicable, direction will be determined using coordinate difference
 	degrees = fabs(180 * (atan(yDiff / xDiff)) / acos(-1));
	}
	printf("Direction: ");
	if(xDiff == 0 && yDiff == 0){
		printf("N/A\n");
	}else if(xDiff == 0 && yDiff > 0){
		printf("North\n");
	}else if(xDiff == 0 && yDiff < 0){
		printf("South\n");
	}else if(xDiff > 0 && yDiff == 0){
		printf("East\n");
	}else if(xDiff < 0 && yDiff == 0){
		printf("West\n");
	}else if(xDiff > 0 && yDiff > 0){
		printf("Northeast, %.2f degrees above x-axis\n", degrees);
	}else if(xDiff < 0 && yDiff > 0){
		printf("Northwest, %.2f degrees above x-axis\n", degrees);
	}else if(xDiff < 0 && yDiff < 0){
		printf("Southwest, %.2f degrees below x-axis\n", degrees);
	}else{
		printf("Southeast, %.2f degrees below x-axis\n", degrees);
	}
}
