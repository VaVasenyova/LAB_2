#include <iostream>
#include <map>

int main1()
{
	int N = 0;
	std::cin >> N;
	std::map<int, bool> array;

	int znach;
	for (int i=0; i < N; ++i)
	{
		std::cin >> znach;
		array[znach] = true;

	}

	std::cout << array.size();

	system("pause");
	return 0;
}