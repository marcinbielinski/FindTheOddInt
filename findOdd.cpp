#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int findOdd(const std::vector<int>& numbers)
{
    std::map<int, int> countMap;

    for (const auto& elem : numbers)
    {
        countMap[elem]++;
    }
    for (const auto& elem : countMap)
    {
        if (elem.second % 2 == 0)
        {
            std::cout << "This elem isn't odd: " << elem.first << std::endl;
        }
        else
        {
            return elem.first;
        }
    }
    return 0;
}