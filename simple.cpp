#include <iostream>

bool isPrime(int number);
int getPrimeNumbers(int numbers[], int limit);
void printNumbers(int numbers[], int size);

int main()
{
	int numbers[100000];
    	int limit = 100000;
	
	int count = getPrimeNumbers(numbers, limit);

  	printNumbers(numbers, count);

    	return 0;
}

bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int getPrimeNumbers(int numbers[], int limit)
{
    int count = 0;

    for (int i = 1; i <= limit; i++)
    {
        if (isPrime(i))
        {
            numbers[count] = i;
            count++;
        }
    }

    return count;
}

void printNumbers(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
    {
	    std:: cout << numbers[i] << std::endl;
    }
}

// time 1,293s
