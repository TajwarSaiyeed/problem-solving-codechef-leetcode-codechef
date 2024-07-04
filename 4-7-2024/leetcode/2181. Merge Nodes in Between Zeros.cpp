/*
    Author: Tajwar Saiyeed
    Date: 2024-07-04 17:46:47
    File: 2181. Merge Nodes in Between Zeros.cpp
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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *temp = new ListNode(0);
        ListNode *t = temp;
        int sum = 0;
        while (head != NULL)
        {
            if (head->val != 0)
            {
                sum += head->val;
                head = head->next;
            }
            else
            {
                ListNode *newNode = new ListNode(sum);
                temp->next = newNode;
                temp = newNode;
                sum = 0;
                head = head->next;
            }
        }

        head = t->next->next;

        return head;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // head = [ 0, 1, 0, 3, 0, 2, 2, 0 ]

    ListNode *head = new ListNode(0);
    ListNode *temp = head;
    int n;
    cin >> n;
    fr(i, 0, n)
    {
        int x;
        cin >> x;
        ListNode *newNode = new ListNode(x);
        temp->next = newNode;
        temp = newNode;
    }

    Solution s;
    ListNode *res = s.mergeNodes(head->next);

    while (res != NULL)
    {
        cout << res->val << " ";
        res = res->next;
    }
    cout << nl;

    return 0;
}

// Problem : https://leetcode.com/problems/merge-nodes-in-between-zeros/