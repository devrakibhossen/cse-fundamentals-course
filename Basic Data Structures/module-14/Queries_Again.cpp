#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insert_at_any_position(Node *head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void print_forword(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

int findSize(Node *curr)
{
    int size = 0;
    while (curr != NULL)
    {
        size++;
        curr = curr->next;
    }
    return size;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        if (idx > findSize(head))
        {
            cout << "Invalid" << endl;
        }
        else if (idx == 0)
        {
            // insert head
            insert_at_head(head, tail, val);

            // forword  print
            print_forword(head);
            cout << endl;

            // reverse print
            print_reverse(tail);
            cout << endl;
        }
        else if (idx == findSize(head))
        {
            // insert tail
            insert_at_tail(head, tail, val);

            // forword  print
            print_forword(head);
            cout << endl;

            // reverse print
            print_reverse(tail);
            cout << endl;
        }
        else
        {
            // insert any position
            insert_at_any_position(head, idx, val);

            // forword  print
            print_forword(head);
            cout << endl;

            // reverse print
            print_reverse(tail);
            cout << endl;
        }
    }
    return 0;
}
