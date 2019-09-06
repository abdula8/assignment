/*
 * main.c
 *
 *  Created on: Sep 6, 2019
 *      Author: root
 */


#include <stdio.h>

int prime_number(int number);
int main(){
	int number_to_check = 0 ;
	scanf("%d", &number_to_check);
	int pr_npr = prime_number(number_to_check);
	printf("%d",pr_npr);

	return 0;
}

int prime_number(int number){

	int value = 2 ;
//	int check = 1 ;
	if(number == 1 || number == 0)
		return 0;
	for(value = 2 ; (value < number) ; ++value)
	{
		if(number%2==0 || number%3==0 ||number%4==0 ||number%5==0){
			return 0;
		}
//		check++;
//		printf("%d ", check);
	}
//	if(check > 1){
//		return 0;
//	}
	return 1 ;
}

