#include <stdio.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    private:
    Node* head;
    Node* tail;

    public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }

    void insert(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display(){
        Node* current = head;
        while (current != NULL){
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
            current = current->next;
        }
};
