#pragma once

#include <vector>
#include <iostream>

class Solution
{
public:
	std::vector<int> _ret;

	Solution();
	~Solution();

    std::vector<int> longestObstacleCourseAtEachPosition(std::vector<int> &obstacles);
	int check_len(const std::vector<int> &test, std::vector<int>::const_iterator pos);
};