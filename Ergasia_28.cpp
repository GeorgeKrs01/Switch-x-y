#include <stdio.h>
#include <stdlib.h>

int x, y, a, c, temp_value;

int numbers_sw(int x, int y){
	temp_value = y;
	y = x;
	x = temp_value;
}

int main(void){
	
	printf("gimme x: \n");
	scanf("%d", &x);
	printf("gimme y: \n");
	scanf("%d", &y);
	
	a = numbers_sw(x, y);
	c = numbers_sw(y, x);
	
	printf("x: %d y: %d. \n", a, c);
	
	system("PAUSE");
	return 0;
}
