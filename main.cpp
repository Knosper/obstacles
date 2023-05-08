#include "Obstacles.hpp"

//working:

std::vector<int> A = {1, 2, 3, 2};
std::vector<int> B = {2, 2, 1};
std::vector<int> C = {3, 1, 5, 6, 4, 2};
std::vector<int> D = {5, 3, 4, 1, 6, 5};

//Todoo
std::vector<int> E = {5, 1, 5, 5, 1, 3, 4, 5, 1, 4};

static void print_intvector(std::vector<int> vec)
{
	std::vector<int>::iterator it = vec.begin();
	while (it != vec.end())
	{
		std::cout << *it;
		it++;
	}
	std::cout << std::endl;
}

int main()
{
	Solution S;

	print_intvector(S.longestObstacleCourseAtEachPosition(E));
	return (0);
}