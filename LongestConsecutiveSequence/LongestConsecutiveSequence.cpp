// LongestConsecutiveSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int ConsecutiveSequence(const std::vector<int>& vec, size_t index)
{
    if (index == vec.size())
        return 0;

    for (size_t i = 0; i < vec.size(); ++i)
    {
        if (vec[i] - vec[index] == 1)
            return 1 + ConsecutiveSequence(vec, i);
    }

    return 0;
}

size_t GetSmallest(const std::vector<int>& A)
{
    size_t index = 0;
    for (size_t i = 1; i < A.size(); ++i)
        if (A[i] < A[index])
            index = i;

    return index;
}

int LongestConsecutiveSequence(std::vector<int>& A)
{
    size_t index = GetSmallest(A);
    return 1 + ConsecutiveSequence(A, index);
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count <= 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        std::cout << "The longest consecutive sequence is: " << LongestConsecutiveSequence(vec) << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
