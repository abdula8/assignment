#include <stdio.h>
// define constants that stops some segments of codes
#define METHOD_00
//#define METHOD_VARs
#define POWER
//#define CHAR_START

/**
 *
 * Functions declaration
 *
 **/

int lenstr(char string[]);
int stoi(char numbers_char[]);

#ifdef POWER
	double power(int num, int power);
#endif
/**
 * The main function that the program start from
 * **/
int main()
{
    char number_str[15] ;//= "252516 mdks454545";
    //scanf("%[^\n]%*c", s)
    scanf("%[^\n]%*c",number_str);
    int num = stoi(number_str);
    printf("\n%d", num);

    // This line to check it is converted correctly
    return 0;
}


/**
 *
 * This code is to calculate the power of a number that is
 *  used to get the single cell number ,
 *  handreds cell number and so on
 *
 * */
#ifdef POWER
double power(int num, int power)
{
	int power_number = 1 ;
	for (int i=1 ; i<=power ; i++)
	{
		power_number *= num ;
	}
	return power_number ;
}
#endif
/**
 * this part of code is to get the length of the string
 * that is used to with the power function to calculate what we
 * explained above
 *
 * */
int lenstr(char string[])
{
	int str_length = 0 ;
	int number = 0 ;
	int num_counter = 0 , i = 0 ;

	while (string[i] != '\0')
	{
		number = string[i] - 48 ;

		if ( number >= 0  && number <= 9 )
		{
			num_counter++;
			str_length++;
		}
#ifdef CHAR_START
		else if(num_counter == 0)
		{
			printf("%d", num_counter);
			continue;
		}
#endif //CHAR_START
		else
			break;
		i++;
	}
	return str_length;
}

/**
 * This part of code is the whole code and the most important one
 *
 * is to collect the previous functions and get the
 *
 * real number can be used in calculations
 *
 * **/

int stoi(char numbers_char[])
{
	int number = 0 ;
	int i = 0 , num_counter = 0;
	int sum = 0;
    double pow ;
    double num ;
//  	printf("%d  \n", power_number);
  	int power_number = lenstr(numbers_char);

	while (numbers_char[i] != '\0' )
	{
//		for(int i=lenstr(numbers_char) ; i<=0 ; i--){
	        number = numbers_char[i] - 48 ;
//	        numbers[i] = number ;
//	        printf("%d", power_number);
	        if ( number >= 0  && number <= 9 )
	        {
	        	num_counter++;
//	        	printf("%d * ", number);
	        	pow = power(10, power_number-1);
	        	power_number--;
//	        	printf("%lf\n", pow);
	        	num = number * pow ;
//	        	printf("%lf\n", num);
	        	sum += num;
	        }
#ifdef CHAR_START
	        else if (num_counter == 0)
	        {
	        	continue;
	        }
#endif //CHAR_START

	        /**
	         *
	         * This part of code is to break if not a number
	         *
	         * is entered
	         *
	         * **/
	        else
	           	break;
	        i++ ;
//	        printf("\n num = %d\n", num_counter);
	    }
return sum;
}


