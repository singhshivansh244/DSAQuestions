#include "../template.h"

void solve(node *head)
{
    node *fast, *slow;
    fast = slow = head;
    bool flag = 0;
    while (fast != nullptr and fast->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            flag = 1;
            break;
        }
    }
    cout << "Circular List ";
    cout << (flag ? "YES" : "NO");
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