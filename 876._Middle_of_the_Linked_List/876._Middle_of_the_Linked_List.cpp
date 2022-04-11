#include "../template.h"

void solve(node *head)
{
    node *first, *second;
    first = head, second = head;
    while (second != nullptr and second->next != nullptr)
    {
        second = second->next->next;
        first = first->next;
    }
    cout << "This is middle of list:->" << first->data;
}

int main()
{
    head = nullptr;
    createList(5);
    createList(4);
    createList(3);
    createList(2);
    createList(1);
    solve(head);
}