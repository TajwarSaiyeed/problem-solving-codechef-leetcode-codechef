/*
    Author: Tajwar Saiyeed
    Date: 2024-06-26 05:41:21
    File: 21. Merge Two Sorted Lists.cpp
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

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        multiset<int> mltst;
        while (list1)
        {
            mltst.insert(list1->val);
            list1 = list1->next;
        }
        while (list2)
        {
            mltst.insert(list2->val);
            list2 = list2->next;
        }

        ListNode *list3 = new ListNode(0);
        ListNode *head = list3;
        for (auto it = mltst.begin(); it != mltst.end(); it++)
        {
            ListNode *newNode = new ListNode(*it);
            list3->next = newNode;
            list3 = newNode;
        }
        return head->next;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    Solution s;
    ListNode *list3 = s.mergeTwoLists(list1, list2);

    while (list3)
    {
        cout << list3->val << " ";
        list3 = list3->next;
    }

    return 0;
}

// Problem : https://leetcode.com/problems/merge-two-sorted-lists/
// Solution : https://leetcode.com/problems/merge-two-sorted-lists/submissions/1300321119/