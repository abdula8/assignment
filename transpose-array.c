
#include <stdio.h>

#define ROW 3
#define COLUMN 3
// Second Array
#define ROW_2 3
#define COLUMN_2 3

int main(void)
{
	// Variables declaration
	int arr [ROW][COLUMN];
	int arr_2 [ROW_2][COLUMN_2];
	int *val_2 = &arr_2[0][0];
	int *val = &arr[0][0];
	/**
	*
	* This part of code is to add
	* elements to the array by pointer technique
	*
	**/
	for(int i=0; i<(COLUMN * ROW);*val++,i++)
	{
		*val = i;
		printf("%d ", *val);
	}
printf("\n\n");

	for(int i=0; i<(COLUMN_2 * ROW_2);*val_2++,i++)
		{
			*val_2 = i;
			printf("%d ", *val_2);
		}
printf("\n\n");

	/**
	*
	* This part of code is to swap
	* the row element by column element
	* using swap function
	*
	**/

	int sum = 0 ;
	int mul_arr[ROW][COLUMN_2];
	for(int i = 0 ; i<ROW ; i++)
	{
		for(int j=0 ; j<COLUMN_2 ; j++)
		{
			mul_arr[i][j]=0;
		}
	}
//Starting to multiplying
	for (int i=0 , f=0 ; i<ROW ; i++, f++)
		for (int j=0 , k=0 ; j<COLUMN_2 ; j++, k++)
			for(int index=0 ; index<ROW_2 ; index++)
					mul_arr[i][j] += arr[i][index] * arr_2[index][j];
	for(int i=0; i<ROW ; i++){
		for(int j=0; j<COLUMN_2 ; j++){
			printf("%d ",mul_arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}





