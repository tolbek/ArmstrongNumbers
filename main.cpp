#include <iostream>
#include <math.h>

using namespace std;

int numberOrder (int number)
{
	int count = 0;
	while (number > 0)
	{
		number /= 10;
		count++;
	}
	return count;
}

bool isArmstrongNumber (int number)
{
	int order_n = numberOrder(number);
	int tempNumberContainer = number;
	int sum = 0;

	while (tempNumberContainer > 0)
	{
		int currentNumber = tempNumberContainer % 10;
		sum += pow(currentNumber, order_n);
		tempNumberContainer /= 10;
	}

	if (sum == number)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	cout << "Armstrong numbers between one and one thousand : ";
	
	for (int num = 1; num <= 1000; ++num)
	{
		if (isArmstrongNumber(num))
		{
			cout << num << "\n";
		}
	}
	return 0;
}
