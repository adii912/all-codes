// program for reversing a singly linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct nodel
{
    int data;
    struct nodel *next;
}*head;
class reverse_link
{
    public:
    void createList(int node)
    {
        struct nodel *newNode,*temp;
        int data,i;
        if(node <=0)
        {
            cout << "list size must be greater than zero.\n";
            return;
        }
        head=(struct nodel *)malloc(sizeof(struct node1));
        if(head==NULL)
        {
            cout << "unable to allocate memory.";
        }
        else 
        {
            cout << "Enter the data of node 1:";
            cin >> data;

            head->data= data;
            head->next= NULL;
            temp=head;
            for(i=2;i<=node;i++)
            {
                newNode=(struct nodel*)malloc(sizeof(struct node1));
                if(newNode ==NULL)
            {
            cout << "unable to allocate memory.";
            break;
            }
                else
                {   
                    cout << "Enter the data of node "<< i << ":";
                    cin >> data;
                    newNode->data = data;
                    newNode->next = NULL;
                    temp->next=newNode;
                    temp = temp->next;
                }
            }
        
        }   
    }
    void reverselist()
    {
        struct nodel*prevNode,*curNode;
        if(head!=NULL)
        {
            prevNode= head;
            curNode= head->next;
            head =head->next;
            prevNode ->next =NULL;
            while(head!=NULL)
            {
                head = head->next;
                curNode -> next = prevNode;
                prevNode = curNode;
                curNode = head;
            }
            head = prevNode;
        }
    }
    void displayList()
    {
        struct nodel *temp;
        if(head == NULL)
        {
            cout << "list is empty.";
        }
        else{
            temp = head;
            while(temp!= NULL)
            {
                cout << " " << temp->data;
                temp= temp->next;
            }
        }
    }
};
int main()
{
    int node, choice;
    reverse_link r;
    cout << "Enter the total no.of nodes:";
    cin >> node;
    r.createList(node);
    cout <<"\n Data in the list\n";
    r.displayList();
    cout <<"\n\nReversed singly linked list\n";
    r.reverselist();
    r.displayList();
};
