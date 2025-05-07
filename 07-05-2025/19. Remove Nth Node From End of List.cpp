/*
    Author: Tajwar Saiyeed
    Date: 2025-05-07 22:55:22
    File: 19. Remove Nth Node From End of List.cpp
*/

#include <bits/stdc++.h>
using namespace std;

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

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {};
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode(int x, ListNode *next) : val(x), next(nullptr) {};
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head;
        int cnt = 0;
        while (temp)
        {
            cnt++;
            temp = temp->next;
        }

        if (n == cnt)
        {
            ListNode *toDel = head;
            head = head->next;
            delete toDel;
            return head;
        }

        int st = cnt - n - 1;
        temp = head;

        while (st--)
        {
            temp = temp->next;
        }

        ListNode *y = temp->next;
        temp->next = temp->next->next;
        delete y;
        return head;
    }
};

// Problem : https://leetcode.com/problems/remove-nth-node-from-end-of-list/