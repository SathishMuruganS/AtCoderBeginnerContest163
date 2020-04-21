/**
Problem Statement
Takahashi has N days of summer vacation.

His teacher gave him M summer assignments. It will take A[i] days for him to do the i-th assignment.

He cannot do multiple assignments on the same day, or hang out on a day he does an assignment.

What is the maximum number of days Takahashi can hang out during the vacation if he finishes all the assignments during this vacation?

If Takahashi cannot finish all the assignments during the vacation, print -1 instead.

Constraints
1≤N≤10^6
1≤M≤10^4
1≤A[i]≤10^4

Input
Input is given from Standard Input in the following format:

N M

A[1]... A[M]

Output
Print the maximum number of days Takahashi can hang out during the vacation, or -1.

Sample Input 1

41 2
5 6

Sample Output 1
30

For example, he can do the first assignment on the first 5 days, hang out on the next 
30 days, and do the second assignment on the last 6 days of the vacation. In this way, he can safely spend 30 days hanging out.

Sample Input 2
10 2
5 6

Sample Output 2
-1
He cannot finish his assignments.

Sample Input 3
11 2
5 6

Sample Output 3

0
He can finish his assignments, but he will have no time to hang out.

Sample Input 4
314 15
9 26 5 35 8 9 79 3 23 8 46 2 6 43 3

Sample Output 4
9

**/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int summer_vacation_days;
    int summer_assignments;
    cin>>summer_vacation_days;
    cin>>summer_assignments;
    int days;
 
    int sum = 0;
    for(int i =0;i<summer_assignments;i++){
        cin>>days;
        sum += days;
    }

    if (summer_vacation_days >= sum){
        cout<<summer_vacation_days - sum<<endl;
    } else {
        cout<<-1<<endl;
    }

    return 0;
}
