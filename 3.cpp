//3.cpp(5 pts)
#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void displayArray(int array[], int size);
//add prototype for printRatio
void printRatio(int array[], int size);


const int SIZE = 11;

int main()
{
    int numbers[SIZE] ={7,-2,4,6, 9, 11,-5, 12, 9, 2, 3};
    //call printRatio here
    printRatio(numbers, SIZE);


    return 0;
}
/****************************************************************************
* Write a function called printRatio() that accepts the array of integers
* and size of an array, and returns nothing.
* This function should prints out the ratio of negative, positive and zero values.
            Example: array has value
            The function should print: {7,-2, 4, 6, 9, 11,-5, 12, 9, 2, 3}
            There are 81.82% of positive numbers
            There are 18.18% of negative numbers
            There are no zero numbers
*********************************************************************************/

void printRatio(int array[], int size)
{
    int Pos = 0,
        Neg = 0,
        Zero = 0;
    //count numbers
    for(int i = 0; i < size; i++)
    {
        if(array[i] > 0)
        {
            Pos++;
        }
        else if(array[i] < 0)
        {
            Neg++;
        }
        else
        {
            Zero++;
        }
    }

    //print ratios
    if(Pos != 0)
    {
        cout << "There are " <<fixed<<setprecision(2)<<static_cast<double>(Pos)*100/size<< "% of positive numbers\n";
    }
    else
    {
        cout << "There are no positive numbers\n";
    }
    if(Neg != 0)
    {
        cout << "There are " <<fixed<<setprecision(2)<<static_cast<double>(Neg)*100/size<< "% of negative numbers\n";
    }
    else
    {
        cout << "There are no negative numbers\n";
    }
    if(Zero != 0)
    {
        cout << "There are " <<fixed<<setprecision(2)<<static_cast<double>(Zero)*100/size<< "% of zero numbers\n";
    }
    else
    {
        cout << "There are no zero numbers\n";
    }
}