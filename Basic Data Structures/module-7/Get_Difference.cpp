
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    while (tmp != NULL)
    {

        if (tmp->val > max)
        {
            max = tmp->val;
        }
        if (tmp->val < min)
        {
            min = tmp->val;
        }

        tmp = tmp->next;
    }

    int difference = max - min;

    cout << difference << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    print_linked_list(head);

    return 0;
}