#include <stdio.h>

main(){
	int x, y;
	
	scanf("%d %d",&x, &y);
	
	if(x > 0 && y > 0)
		printf("1"); // Quadrant1 
	else if(x < 0 && y > 0)
		printf("2"); //Quadrant2
	else if(x < 0 && y < 0)
		printf("3"); //Quadrant3
	else if(x > 0 && y < 0)
		printf("4"); //Quadrant4
		
	return 0;
}
