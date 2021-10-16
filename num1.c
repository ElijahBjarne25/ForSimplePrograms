// Найти количество делителей х!
#include <stdio.h>

// функция для нахождения факториала
int factorial(int f){ 
	int count = 1;
	for(int i = 1; f >= i; i++){
		count = count * i;		
	}
	return count;
}

int main(){
	int x, f;
	int count;

	count = 0; 

	printf("введите х: \n");
	scanf("%d", &x);
	
	f = factorial(x); //для красоты и удобства, f можно не вводить в программу, оставив x
		
	for(int i = 1; f >= i; i++){ // цикл для нохождения количества делителей факториала
		if(f % i == 0)
			count++;
	}
	printf("%d", count);

	return 0;
}
