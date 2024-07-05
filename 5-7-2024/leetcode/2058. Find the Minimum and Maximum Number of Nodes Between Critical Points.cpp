/*
    Author: Tajwar Saiyeed
    Date: 2024-07-05 22:20:50
    File: 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define p1 cout << '1'
#define p0 cout << '0'
#define nl '\n'
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)
#define nfr(i, ivalue, n) for (int i = ivalue; i > n; i--)
#define srt(vll) sort(vll.begin(), vll.end())
#define srtG(vll) sort(vll.begin(), vll.end(), greater<ll>())
#define mps map<string, int>
#define dt(n) fixed << setprecision(n)
typedef long long ll;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    vector<int> nodesBetweenCriticalPoints(ListNode *head)
    {
        int minDistance = INT_MAX;
        ListNode *prev = head;
        ListNode *curr = head->next;
        int currPosition = 1;
        int previousCriticalIndex = 0;
        int firstCriticalIndex = 0;

        while (curr->next != NULL)
        {
            if ((curr->val < prev->val &&
                 curr->val < curr->next->val) ||
                (curr->val > prev->val &&
                 curr->val > curr->next->val))
            {

                if (previousCriticalIndex == 0)
                {
                    previousCriticalIndex = currPosition;
                    firstCriticalIndex = currPosition;
                }
                else
                {
                    minDistance =
                        min(minDistance, currPosition - previousCriticalIndex);
                    previousCriticalIndex = currPosition;
                }
            }

            currPosition++;
            prev = curr;
            curr = curr->next;
        }

        if (minDistance == INT_MAX)
        {
            return {-1, -1};
        }

        int maxDistance = previousCriticalIndex - firstCriticalIndex;
        return {minDistance, maxDistance};
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Solution sol;

    vector<int> res;
    // [ 5, 3, 1, 2, 5, 1, 2 ]
    ListNode *head = new ListNode(5);
    head->next = new ListNode(3);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next->next = new ListNode(2);

    res = sol.nodesBetweenCriticalPoints(head);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}

// Problem : https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points