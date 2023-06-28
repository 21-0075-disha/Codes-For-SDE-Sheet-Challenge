/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
void reverse(Node *&head){

    if(head == NULL || head->next == NULL){

        return ;

    }

    Node* curr=head;

    Node* prev=NULL;

    Node* adv=NULL;

    while(curr != NULL){

        adv=curr->next;

        curr->next=prev;

        prev=curr;

        curr=adv;

    }

    head=prev;

    //cout<<head->data;

}

Node* removeKthNode(Node* head, int K)

{

    // Write your code here.

    if(head==NULL){

        return head;

    }

    

    reverse(head);

    //int count1=coun(head,0);

    int count=1;

    if(head->next == NULL && K==1){

        return NULL;

    }

    if(count==K){

        head=head->next;

        reverse(head);

        return head;

    }

    // int f=count1-K;

    Node* curr=head;

    Node *prev=NULL;

    while(count != K){

        prev=curr;

        curr=curr->next;

        count++;

    }

    if(count == K){

        prev->next=curr->next;

        curr=curr->next;

    }

    reverse(head);

    return head;

}
