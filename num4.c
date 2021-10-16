//Найти среднее арифметическое четных цифр числа x
#include <stdio.h>

int main(){
	int x, x1, n;
	int count, count1;
	
	printf("Введиет число х: ");
	scanf("%d", &x1);
	
	x = x1;

	count = 0;
	count1 = 0;
	while(x > 0){ 
		n = x % 10; 
	       	if(n % 2 == 0){
	       		count += n;
			count1++;	
	       	}
		x /= 10; //возникает ошибка если нет четных цифр в числе
				
	}
	
	n = count / count1;
	printf("Среднее арифметическое числа %d = %d", x1, n);
	return 0;
}
