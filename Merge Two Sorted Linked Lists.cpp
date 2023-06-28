#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL){

        return second;

    }

    if(second == NULL){

        return first;

    }

    

    Node<int>*  ans = new Node<int>(-1);

    Node<int>*  temp = ans;

    

    while(first!=NULL && second!=NULL){

        if(first->data < second->data){

            temp->next = first;

            temp = first;

            first = first->next;

        }

        else{

            temp->next = second;

            temp = second;

            second = second->next;

        }

    }

    

    while(first != NULL){

        temp->next = first;

        temp = first;

        first = first->next;

    }

    while(second != NULL){

        temp->next = second;

        temp = second;

        second = second->next;

    }

    return ans->next;
}
