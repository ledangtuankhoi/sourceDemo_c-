#include <iostream>
using namespace std;

typedef struct tagNode{
    int info;
    struct tagNode *next;
}node;

typedef struct taglist
{
    node *head;
    node *tail;
}list;


node *creatNode (int x)
{
    node *p;
    p = new node;
    p -> info = x;
    p -> next = NULL;
    return p;
}

void creatList(list &l)
{
    l.head = NULL;
    l.tail = NULL;
}

void AddheadList(list &l, int x)
{
    // creatNode(x);
    node *p;
    p = new node;
    p = creatNode(x);
    if (l.head == NULL)
    {
        l.head = p;
    }
    else 
    {
        p -> next = l.head;
        l.head = p;
    }
}

void AddtailList(list &l, node *x)
{
    if (l.tail == NULL)
    {
        l.tail = x; 
    }
    else 
    {
        l.tail ->next = x ;
    }
    
}
int main()
{
    list songuyem; 
    cout << "\nvi tri; " << creatNode(2);     
    cout <<  "\nvi tri next: " << creatNode(2) -> next;
    cout <<  "\ngia tri: " << creatNode(2) -> info;

    while (songuyem.tail ==  NULL)
    {
        node temp;
        
    }

}