#include <iostream>
#include <vector>
#include <initializer_list>
#include <algorithm>

int main()
{
	std::vector<int> v1 = {1, 2, 3};
	std::vector<int> v2 = {4, 5, 6};
	std::vector<int> v3 = {7, 8, 9};

	std::vector<std::vector<int>> general = {v1, v2, v3};
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			std::cout << general[i][j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}