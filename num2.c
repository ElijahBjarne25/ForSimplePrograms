// определить является ли число x числом Фибоначи 
#include <stdio.h>

int main(){
	int fibo, hold, check;
	int old_value = 0;
	int value = 1; 
	
	check = 0;

	printf("введите число: ");
	scanf("%d", &fibo);

	for(int i = 0; i < fibo; i++){
		hold = value;
		value += old_value; 
		old_value = hold;
		
		if(value == fibo){
			printf("число %d является числом фибоначи.", value);
			check = 1;
			break;
		}
	}
	if(check == 0)
		printf("Число %d не является числом Фибоначи.", fibo);
	
	
	
	return 0;
}
