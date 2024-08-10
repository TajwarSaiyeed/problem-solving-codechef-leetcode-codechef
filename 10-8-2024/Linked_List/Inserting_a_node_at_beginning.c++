#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void Insert(int x, Node *&head)
{
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
}

void Print(Node *head)
{
    Node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    Node *head = NULL;
    printf("How many numbers?\n");
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        printf("Enter the number : ");
        scanf("%d", &x);
        Insert(x, head);
        Print(head);
    }

    return 0;
}