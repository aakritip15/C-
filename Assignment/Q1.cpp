/* Write a function template that returns the float average and take two arguments: 
one is array of number and size of the array. Write a main function to implement the function with different type of data.*/


#include <iostream>
using namespace std;

template <typename T> float average(T arr[], int s)
{   T sum =0;
    float average;
	for (int i = 0; i < s; i++)
		{sum += arr[i];
        }

    average = sum/s;


    return average;
}



int main()
{   float avg, Avg;
	int arr[5] = { 1, 2, 3, 4, 5 };
    float Arr[5] = { 1.0, 2.0, 3.0, 4.0, 5.5 };
	avg = average<int>(arr, 5);
    cout << avg <<endl;
    Avg = average<float>(Arr, 5);
    cout << Avg <<endl;
	return 0;
}
