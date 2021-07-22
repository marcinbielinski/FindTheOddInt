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
}

int main() {
    auto a = findOdd({20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5});
    std::cout << "Main: " << a << std::endl;
    return 0;
}
