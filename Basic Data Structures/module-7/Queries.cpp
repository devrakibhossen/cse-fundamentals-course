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
    tail->next = newnode;
    tail = newnode;
}

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void delete_at_any_pos(Node *&head, Node *&tail, int v)
{
    Node *tmp = head;
    if (v == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    else
    {
        for (int i = 1; i < v; i++)
        {
            tmp = tmp->next;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
        if (deleteNode == tail)
        {
            tail = tmp;
        }
    }
}
int size_of_sll(Node *head)
{
    Node *temp = head;
    int sz = 0;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        int sz = size_of_sll(head);
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
            cout << endl;
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
            print_linked_list(head);
            cout << endl;
        }
        else if (x == 2)
        {
            if (v < sz)
            {
                delete_at_any_pos(head, tail, v);
            }

            print_linked_list(head);
            cout << endl;
        }
    }

    return 0;
}