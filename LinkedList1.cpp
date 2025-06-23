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

class Linkedlist{
public:
    Node* head;

    Linkedlist(){
        head = NULL;
    }

    void insertAttail(int val){
        
        Node* new_node = new Node(val);
        
        if (head == NULL)
        {
            head = new_node;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        
    }

    void display(){

        Node* temp = head;

        while (temp != NULL)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
        
    }

    void deleteAlternet(Node* head){
        Node* curr_node = head;
        while (curr_node != NULL && curr_node->next != NULL)
        {
            Node* temp = curr_node->next;
            curr_node->next = curr_node->next->next;
            free(temp);
            curr_node = curr_node->next;
        }
        
    }

    void deleteDuplicate(Node* head){
        Node* curr_node = head;

        while (curr_node != NULL)
        {
            while (curr_node->next != NULL && curr_node->val == curr_node->next->val)
            {
                Node* temp = curr_node->next;
                curr_node->next = curr_node->next->next;
                free(temp);
            }
            curr_node = curr_node->next;
        }
        
    }

};


int main(){

    int n;
    cout<<"Enter a number of element : ";
    cin>>n;
    Linkedlist ll;
    
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin>>val;
        ll.insertAttail(val);
    }
    
    ll.display();

   // ll.deleteAlternet(ll.head);

   // ll.deleteDuplicate(ll.head);
   
    //ll.display();

    return 0;
}