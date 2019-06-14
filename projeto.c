#include <stdio.h>

int soma(int a, int b){
	int soma_num = a + b;
	return soma_num;
}
int sub(int a, int b){
	int sub_num = a - b;
	return sub_num;
}
int multi(int a, int b){
	int multi_num = a * b;
	return multi_num;
}
int div(int a, int b){
	if(b-a){
		printf("Não pode dividir");
		return div_num;
	}
	else{
		int div_num = a / b;
		return div_num;
	}
}
int main(){
	printf("Soma dos dois números: %d\n", soma(5,5));
	printf("Soma dos dois números: %d\n", sub(5,5));
	printf("Soma dos dois números: %d\n", multi(5,5));
	printf("Soma dos dois números: %d\n", div(5,5));
	return 0;
}
