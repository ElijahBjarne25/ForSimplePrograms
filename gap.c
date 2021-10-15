/* в промежутке от х(включительно) до у(не влючительно)
 * вывести кол-во делителей х заканчивающиеся на 1
 */

#include <stdio.h>

int main(){
	int x, y; //переменные для обозначения промежутко
	int count; //переменная для количества делителей
	int div_count; //счетчик переменных для делителей числа

	count = 0;
	x = 1; //заданное начало промежутка
	y = 500; //заданный конец промежутка

	while(x < y){ //Перебор промежутка от x(вкл) до y(не вкл)
		div_count = 1; //Объявляем счетчик переменных равным 1
		while(x >= div_count){ //цикл для перебора чисел для деления х 
			if(x % div_count == 0){ //проверка является ли число делителем
				if(div_count % 10 == 1){ //проверка окончания делителя div_count
					count++;
					div_count++;
				}
				else{
					div_count++;
				}
			}
			else{
				div_count++;
			}
		}
		x++;
	}
	printf("%d", count);	
	return 0;
}
