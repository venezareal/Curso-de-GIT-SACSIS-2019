#include <stdio.h>

int soma(int a, int b){
	in soma_num = a + b;
	return soma_num;
}
int sub(int a, int b){
	in sub_num = a - b;
	return sub_num;
}
int multi(int a, int b){
	in multi_num = a * b;
	return multi_num;
}
int div(int a, int b){
	in div_num = a / b;
	return div_num;
}
int main(){
	printf("Soma dos dois n�meros: %d\n", soma(5,5));
	printf("Soma dos dois n�meros: %d\n", sub(5,5));
	printf("Soma dos dois n�meros: %d\n", multi(5,5));
	printf("Soma dos dois n�meros: %d\n", div(5,5));
	return 0;
}
