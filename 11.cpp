//11.cpp	(25 pts)
#include <iostream>
#include <vector>

using namespace std;

//function prototypes
void displayVector(const vector <int> &vec);

/**
Write the C++ code that removes the duplicate values in a vector of integers.
The final vector should be sorted. You can write the solution code in main()
**/
int main()
{
    vector <int> numbers={101,2,44,44,46,1,2,44,1};
    cout << "Initial array: ";
    displayVector(numbers);

    //remove duplicates
    for(size_t i = 0; i < numbers.size()-1; i++)
    {
        for(size_t j = i+1; j < numbers.size(); j++)
        {
            if(numbers[i] == numbers[j])
            {
                int temp = numbers[j];
                numbers[j] = numbers[numbers.size()-1];
                numbers[numbers.size()-1] = temp;
                numbers.pop_back();
                j--;
                continue;
            }
        }
    }

    cout << "Array without duplicate values: ";
    displayVector(numbers);

    //sort vector
    bool madeAswap = true;
    int lastIndex = numbers.size() - 1;

    while (madeAswap)
    {
        madeAswap = false;
        for (int count = 0; count < lastIndex; ++count)
        {
            if (numbers[count] > numbers[count + 1])
            {
                int temp = numbers[count];
                numbers[count] = numbers[count + 1];
                numbers[count + 1] = temp;
                madeAswap = true;
            }
        }
        --lastIndex;
    }


    cout << "Sorted array: ";
    displayVector(numbers);

    return 0;
}

/********************displayVector*****************************
* This function displays the vector of int (need for testing)
*************************************************************/
void displayVector(const vector <int> &vec)
{
    for (int i = 0; i <(int)vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout <<endl;
}
