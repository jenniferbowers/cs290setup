/*********************************************************************
* Author: Jennifer Bowers
* Date: December 19, 2017
* Description:
*
* "C++ Early Objects" 9th Edition by Gaddis-
* Chapter 8 Program Challenge "Larger Than n":
*
* Create a program with a function that accepts three arguements:  an
* integer array, an integer size that indicates how many elements are 
* in the array, and an integer n.  The function should display all the 
* numbers in the array that are greater than the number n.
*********************************************************************/
/*Program Plan of Attack
*
* Define a prototype for greaterFunction with 3 arguemments: an
* integer array, an integer size that indicates how many elements are 
* in the array, and an integer n.  It will return void and print all 
* numbers greater than n.
* Go through array elements one by one using for loop if the current
* element is greater than n, display the number.
* In the main function read greaterArray size, then declare an array 
* of size size and number n.
* Make a function call to greaterFunction.
*/

//Create function prototyoe
void greaterFunction(int array[], int, int);

#include <iostream>

using namespace std;

int main()
{
	//Declare constant size of array
	const int SIZE = 9;
	//Declare array
	int greaterArray[SIZE] = {1, 2, 3, 4, 5, 8, 10, 4, 27};
	
	//Call greaterFunction to display numbers 
	//in array larger than 6.
	greaterFunction(greaterArray, SIZE, 6);

	//Pause system
	cin.get();
	cin.get();
	return 0;

}

//Function header
void greaterFunction(int array[], int size, int n)
{
	//Create for loop to read through each element
	//in the array.
	for (int i = 0; i < size; i++)
	{
		//is array number is larger than n, then display n
		if (array[i] > n)
		{
			cout << array[i] << endl;
		}
	}
}
