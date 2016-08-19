#include<iostream>

using namespace std;

int exercise1()
{
	for (int i = 100; i > 0; i-=2)
	{
		cout << i << endl;
	}

	system("pause");
	return 0;
}

int exercise2()
{
	int i = 0;
	for (; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");

	return 0;
}

int exercise3()
{
	int i = 1, multiple[1000];
	int sum = 0;

	for (; i < 1001; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			multiple[i] = i;
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			multiple[i] = i;
		}
		else
		{
			multiple[i] = 0;
		}
	}

	i = 1;

	for (; i < 1001; i++)
	{
		sum = multiple[i] + sum;
	}

	cout << "The sum of all multiples of 3 or 5 under 1000 is: " << sum << endl;
	system("pause");

	return 0;
}

int main()
{
	exercise1();
	exercise2();
	exercise3();
	return 0;
}