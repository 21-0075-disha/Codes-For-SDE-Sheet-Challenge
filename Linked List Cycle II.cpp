/****************************************************************

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


*****************************************************************/

Node *firstNode(Node *head)
{
   if(head==NULL || head->next==NULL){
       return NULL;


   }

   Node * fast= head;
   Node * slow= head;
   Node * temp= head;

   while(fast->next!=NULL && fast->next->next!=NULL){
       slow= slow->next;
       fast= fast->next->next;

       if(fast==slow){ // we detect the cycle in the given linked list.

       while(slow!=temp){
           slow= slow->next;
           temp= temp->next;
       }
        return temp;

       }
   }

   return NULL;
}
