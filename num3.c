//определить, является ли натуральное число х совершенным
#include <stdio.h>

int main(){
	int x;
	int count;

	printf("Введите число: ");
	scanf("%d", &x);

	count = 0;

	for(int i = 1; x > i; i++){
		if(x % i == 0)
			count += i;
	}
	if(count == x)
		printf("число %d является совершенным.", x);
	else
		printf("число %d не является совершенным.", x);
}
