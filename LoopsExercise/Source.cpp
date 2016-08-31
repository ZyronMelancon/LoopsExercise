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
	int i = 0, multiple[1000];
	int sum = 0;

	for (; i < 1000; i++)
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

	for (; i < 1000; i++)
	{
		sum = multiple[i] + sum;
	}

	cout << "The sum of all multiples of 3 or 5 under 1000 is: " << sum << endl;
	system("pause");

	return 0;
}

int exercise4()
{
	int i = 100;

	while (i > 0)
	{
		cout << i << endl;
		i -= 2;
	}
	system("pause");

	i = 0;

	while (i < 101)
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
		i++;
	}
	system("pause");

	i = 0;

	int multiple[1000];
	int sum = 0;

	while (i < 1000)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			multiple[i] = i;
		}
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
		i++;
	}

	i = 0;

	while (i < 1000)
	{
		sum = multiple[i] + sum;
		i++;
	}

	cout << "The sum of all multiples of 3 or 5 under 1000 is: " << sum << endl;
	system("pause");

	return 0;
}

int main()
{
	exercise4();
	return 0;
}