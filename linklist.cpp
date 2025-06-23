#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }

};

void insertAtStrat(Node* &head, int val){
    
    Node* new_node = new Node(val);

    new_node->next = head;
    head = new_node;
     
}

void insertAtEnd(Node* &head, int val){

    Node* new_node = new Node(val);

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertAtPos(Node* &head, int val, int pos){
    
    int curr_pos = 0;
    Node* temp = head;
    Node* new_node = new Node(val);

    while (curr_pos != pos - 1)
    {
        temp = temp->next;
        curr_pos++;
    }

    new_node->next = temp->next;
    temp->next = new_node;
    
}

void updateAtpos(Node* &head, int val, int pos){

    int curr_pos = 0;
    Node* temp = head;

    while (curr_pos != pos)
    {
        temp = temp->next;
        curr_pos++;
    }
    temp->val = val;

}

void deleteAthead(Node* &head){

    Node* temp = head;
    head = head->next;
    free(temp);

}

void deleteAtend(Node* &head){

    Node* secondLast = head;
    while (secondLast->next->next != NULL)
    {
        secondLast = secondLast->next;
    }
    Node* temp = secondLast ->next;
    secondLast->next = NULL;
    free(temp);

}

void deleteAtPos(Node* &head,int pos){

    int curr_pos = 0;
    Node* prev = head;

    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }
    Node* temp = prev->next;
    prev->next = prev->next->next;
    free(temp);

}

void display(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    
    Node* head = NULL;

    insertAtStrat(head,2);
    display(head);

    insertAtStrat(head,1);
    display(head);

    insertAtEnd(head,3);
    display(head);

    insertAtEnd(head,4);
    display(head);

    insertAtPos(head,5,2);
    display(head);

    updateAtpos(head,10,2);
    display(head);

    deleteAthead(head);
    display(head);

    deleteAtend(head);
    display(head);

    deleteAtPos(head,1);
    display(head);

    return 0;
}