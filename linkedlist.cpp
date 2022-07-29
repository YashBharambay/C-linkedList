// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp-> next;
    }    
    cout<<endl;
}

void insertAtFirst(int data , Node* &head){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtLast(int data , Node* &tail){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void removeFirst(Node* &head){
    head = head->next;
}

void removeLast(Node* &tail){
    tail -> next = NULL;
}

void getFirstNode(Node* &head){
    if(head == NULL){
        cout << "No Head";
    }
    else{
        cout<<head->data<<endl;
    }
}

void getLastNode(Node* &tail){
    cout << tail->data<<endl;
}

void insertAtPos(Node* &head , Node* &tail ,int position , int data){
    if(position ==1){
        insertAtFirst(data , head);
        return;
    }
    int cnt = 1;
    Node* temp = head;
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    
    if(temp->next == NULL){
        insertAtLast(data , tail);
        return;
    }
    
    Node* nodeAtIns = new Node(data);
     nodeAtIns->next = temp->next;
     temp->next = nodeAtIns;
}

void deleteNode(Node* &head , Node* &tail , int position){
    if(position==1){
        removeFirst(head);
        return;
    }
    // Node *temp = head;
    Node* curr= head;
    Node* prev = head;
    int cnt = 1;
    while(cnt < position){
       prev = curr;
       curr=prev->next;
       cnt++;
    }

    
    prev->next = curr->next;
    // if(temp->next==NULL){
    //     removeLast(tail);
    //     return;
    // }
}

int main() {
    // Write C++ code here
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    
    // insertAtFirst(5 , head);
    insertAtLast(20 , tail);
    insertAtLast(30 , tail);
    insertAtLast(40 , tail);
    insertAtLast(50 , tail);
    insertAtLast(60 , tail);
    // removeFirst(head);
    // removeLast(tail);
    print(head);
    // getFirstNode(head);
    // getLastNode(tail);
    cout<<"Deletion of Node"<<endl;
    deleteNode(head , tail , 5);
    // insertAtPos(head , tail , 5, 15);
    // cout<<"after insertion at pos"<<endl;
    print(head);
    std::cout << "Hello world!";

    return 0;
}
