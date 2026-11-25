#include <iostream>

const int limit = 100000;

int main()
{
    bool numbers[limit + 1];

    for (int i = 0; i <= limit; i++)
    {
        numbers[i] = true;
    }

    numbers[0] = false;
    numbers[1] = false;

    for (int i = 2; i <= limit; i++)
    {
        if (numbers[i])
        {
            for (int j = i * 2; j <= limit; j += i)
            {
                numbers[j] = false;
            }
        }
    }

    for (int i = 2; i <= limit; i++)
    {
        if (numbers[i])
        {
            std::cout << i << '\n';
        }
    }

    return 0;
}

// time 0,026s
