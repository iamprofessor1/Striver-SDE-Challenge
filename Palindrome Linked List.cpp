#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> * reverse(LinkedListNode<int> *  head){
    LinkedListNode<int> * curr = head;
    LinkedListNode<int> * prev =NULL;
    while(curr!=NULL){
        LinkedListNode<int> * next  =curr->next;
        curr->next = prev;
        prev =curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head == NULL || head->next == NULL ){
        return true;
    }
    LinkedListNode<int> * slow = head;
    LinkedListNode<int> * fast = head->next;
    while(fast != NULL and fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    LinkedListNode<int>  *rev = reverse(slow->next);
    slow->next = rev;
    fast =head;
    while(rev!=NULL){
        if(fast->data!= rev->data){
            return false;
        }
        fast= fast->next;
        rev = rev->next;
    }
    return true;

}
