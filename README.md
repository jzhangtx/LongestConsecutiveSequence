Longest Consecutive Sequence


Given an array of integers A, find the length of the longest consecutive elements sequence.

Example
A: [24, 2, 34, 1, 3, 4]
Result: 4
Explanation: The longest consecutive sequence is [1, 2, 3, 4].
A: [24, 2, 34, 1, 3, 4, 3, -1, 28, 0]
Result: 6
Explanation: The longest consecutive sequence is [-1, 0, 1, 2, 3, 4].
Testing
Input Format
The first line contains an integer ‘T’ denoting the number of test cases.
For each test case, the input has two lines:

An integer ‘n’ denoting the length of the array A.
n space-separated integers denoting the elements of the array A.
Output Format
For each test case, the output contains one line with an integer denoting the length of the longest increasing sequence.

Sample Input
3
6
24 2 34 1 3 4
10
24 2 34 1 3 4 3 -1 28 0
4
5 7 9 3
Expected Output
4
6
1