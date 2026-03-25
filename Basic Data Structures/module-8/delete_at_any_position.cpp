#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int val;
    Node *next;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};

void delete_at_any_pos(Node *&head, int idx)
{
    // Node* deletenode = head;
    Node *tmp = head;
    for(int i = 1; i < idx; i++){
        tmp = tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next= tmp->next->next;
    tmp->prev = tmp;
    delete deletenode;

}

void print_forword(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;
    delete_at_any_pos(head, 2);
    print_forword(head);

    return 0;
}