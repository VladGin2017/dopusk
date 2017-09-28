#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "function.h"

int main(){
	float a, b, c, d, x1, x2;
	printf("%s", "Введите а:\n");
	scanf("%f", &a);
	printf("%s", "Введите b:\n");
	scanf("%f", &b);
	printf("%s", "Введите c:\n");
	scanf("%f", &c);

	d = D(a, b, c);
	if(a == 0){
		printf("Уравнение вида bx+c\n");
		x1 = XX(c, b);
        }
	else if((b == 0) && ((c < 0) || (a < 0))){
		printf("Уравнение вида ax^2+c\n");
		x1 = (-1)*(XX2(a, c));
		x2 = XX2(a, c);
}
		

	if (d < 0)
	{
		printf("Переменная ниже нуля\n");
	}
	else if (d == 0)
	{
		printf("Один корень:\n");
		x1 = X(d, a, b, 1);
		printf("\n%f", x1);
	}
	else
	{
		printf("Два корня:\n");
		x1 = X(d, a, b, 1);
		x2 = X(d, a, b, -1);
		printf("\n%f", x1);
		printf("\n%f", x2);
	}

	return 0;
}
