/*
You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.
Example 1:

Input: salary = [4000,3000,1000,2000]
Output: 2500.00000
Explanation: Minimum salary and maximum salary are 1000 and 4000 respectively.
Average salary excluding minimum and maximum salary is (2000+3000) / 2 = 2500
Example 2:

Input: salary = [1000,2000,3000]
Output: 2000.00000
Explanation: Minimum salary and maximum salary are 1000 and 3000 respectively.
Average salary excluding minimum and maximum salary is (2000) / 1 = 2000


Constraints:

3 <= salary.length <= 100
1000 <= salary[i] <= 106
All the integers of salary are unique.

*/
#include <iostream>
#include <climits>
using namespace std;

#include <vector>
double average(vector<int> &salary)
{
    int n = salary.size();
    int mn = INT_MAX, mx = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + salary[i];
        mn = min(mn, salary[i]);
        mx = max(mx, salary[i]);
    }
    double ans = (sum - mn - mx) / ((n - 2) * 1.0);
    if (n > 2)
        return ans;
    else
        return 0;
}

int main()
{

    vector<int> salary = {8000, 9000, 2000, 3000, 6000, 1000};
    cout << (double)average(salary) << endl;
}