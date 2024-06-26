/*

You are given an array
�
A of size
�
N.

Let
�
M be the minimum value present in the array initially.
In one operation, you can choose an element
�
�
A
i
​

(
1
≤
�
≤
�
)
(1≤i≤N) and an integer
�
X
(
1
≤
�
≤
100
)
(1≤X≤100), and set
�
�
=
�
A
i
​
 =X.

Determine the minimum number of operations required to make
�
M the maximum value in the array
�
A.

Input Format
The first line of input will contain a single integer
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer
�
N - the size of the array.
The next line of each test case contains
�
N space-separated integers
�
1
,
�
2
,
…
,
�
�
A
1
​
 ,A
2
​
 ,…,A
N
​
  - the elements of the array.
Output Format
For each test case, output on a new line, the minimum number of operations required to make
�
M the maximum value in the array
�
A.

Constraints
1
≤
�
≤
100
1≤T≤100
1
≤
�
≤
100
1≤N≤100
1
≤
�
�
≤
100
1≤A
i
​
 ≤100
Sample 1:
Input
Output
3
2
1 2
4
2 2 3 4
1
1
1
2
0
Explanation:
Test case
1
1: The minimum value in the array,
�
M, is initially
1
1. We can use one operation as following:

Choose
�
2
A
2
​
  and set it as
�
=
1
X=1. Thus, the final array becomes
[
1
,
1
]
[1,1].
Since all elements of the final array are
1
1, the maximum value of the array is now
1
1. It can be shown that this is the minimum number of operations required to do so.

Test case
2
2: The minimum value in the array,
�
M, is initially
2
2. We can use two operations as following:

Choose
�
4
A
4
​
  and set it as
�
=
2
X=2. Thus, the array becomes
[
2
,
2
,
3
,
2
]
[2,2,3,2].
Choose
�
3
A
3
​
  and set it as
�
=
2
X=2. Thus, the array becomes
[
2
,
2
,
2
,
2
]
[2,2,2,2].
Since all elements of the final array are
2
2, the maximum value of the array is now
2
2.

Test case
3
3: The minimum value in the array,
�
M, is initially
1
1. It is also the maximum value of the array. Hence, no operations are required.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[0])
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}
