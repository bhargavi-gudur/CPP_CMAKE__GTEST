/**
 * @file linkedlist.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-04-14
 * 
 */
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *ptrnext;
};
// node *head = nullptr; // global variable
void display(node *n);
void linkedlist(node **head);

int main()
{
    node *head = nullptr;
    linkedlist(&head);

    return 0;
}

void linkedlist(node **head)
{

    *head = new node;
    node *second = new node;
    node *third = new node;

    (*head)->data = 7;
    second->data = 723;
    third->data = 117;

    (*head)->ptrnext = second;
    second->ptrnext = third;
    third->ptrnext = nullptr;
    display(*head);
}
void display(node *n)
{
    while (n != nullptr)
    {
        cout << n->data << " -> "<< n->ptrnext << " | ";
        n = n->ptrnext;
    }
    cout << endl;
}