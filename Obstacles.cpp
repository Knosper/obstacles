#include "Obstacles.hpp"

Solution::Solution():_ret()
{

}

Solution::~Solution()
{
	_ret.clear();
}

int Solution::check_len(const std::vector<int> &test, std::vector<int>::const_iterator pos)
{
	int round = 0;
	std::size_t count = 1;
	std::vector<int>::const_iterator it = test.begin();
	while (it != pos)
	{
		if (*it <= *pos)
		{
			if (round)
			{
				//std::cout << "round: " << round << std::endl;
				if (*it >= *(it - 1))
					count++;
			}
			else if (!round)
				count++;
			round++;
		}
		it++;
		
	}
	return (count);
}
/*
Expected:
[1,1,2,3,2,3,4,5,3,5]

my output:
[1,1,2,3,2,2,3,6,2,4]
*/
std::vector<int> Solution::longestObstacleCourseAtEachPosition(std::vector<int> &obstacles)
{
	int stop = 0;
	int count = 0;
	std::vector<int>::const_iterator it = obstacles.cend() - 1;
	while (true)
	{
		count = this->check_len(obstacles, it);
		if (count)
			_ret.insert(_ret.begin(), count);
		if (!stop)
			it--;
		else
			break ;
		if (it == obstacles.cbegin())
			stop = 1;
	}
	return (_ret);
}
