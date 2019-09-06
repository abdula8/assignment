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
/**
 * 
 * This part of code is to check the conditions of the prime number
 * i found the prime number may be recognized by dividing any number by the
 * 4 first base number that any number can be the nultible of it 
 * ("2 3 4 5")
 * if you track these numbers you will found any nit_prime number 
 * can't be divided by them 
 * 
 * **/
	for(value = 2 ; (value < number) ; ++value)
	{
		if(number%2==0 || number%3==0 ||number%4==0 ||number%5==0){
			return 0;
		}

	}

	return 1 ;
}

