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
/**
 *
 *   0: is the indicator for not_prime number
 *   1: is the indicator for the prime number
 *
 **/
	int value = 2 ;
	// This part of code is to return 0 for not prime 2 numbers 0 and 1
	if(number == 1 || number == 0)
		return 0;
// checking the prime number by ividing it by all numbers less than it except 1 and 0
	
	for(value = 2 ; (value < number) ; ++value)
	{
		int x = number %value ;
		if(x == 0){
			return 0;
		}

	}

	return 1 ;
}

