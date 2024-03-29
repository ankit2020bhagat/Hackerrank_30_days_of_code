#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Solution
{
public:
  
    Node *insert(Node *head, int data)
    {   
        
        Node *newnode = new Node(data);
        newnode->data=data;
        newnode->next=NULL;
        if(head==NULL){
           head=newnode;
           return head;
        }
        else{
            Node *temp=head;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        return head;
    }

    void display(Node *head)
    {
        Node *start = head;
        while (start)
        {
            cout << start->data << " ";
            start = start->next;
        }
    }
};
int main()
{
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0)
    {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
}