#include <stdio.h>
#include <stdlib.h>

int x, y;

void numbers_sw(){
	
//	int temp_value;
	
	int temp_value = y;
	y = x;
	x = temp_value;
}

int main(void){
	
	printf("gimme x: \n");
	scanf("%d", &x);
	printf("gimme y: \n");
	scanf("%d", &y);
	
	printf("x: %d y: %d. \n", x, y);
	
	numbers_sw();
	//a = numbers_sw(x, y);
	//c = numbers_sw(y, x);
	
	printf("x: %d y: %d. \n", x, y);
	
	system("PAUSE");
	return 0;
}
