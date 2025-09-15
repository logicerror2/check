#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(){
        data =0;
        next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insert(int data){
        Node* newNode = new Node(data);
        if (head==NULL){
            head = newNode;
        }else{
            Node* currNode = head;
            while (currNode->next != NULL){
                currNode = currNode->next;
            }
            currNode->next = newNode;
        }
    }


    void display(){
        Node* currNode = head;
        while(currNode != NULL){
            cout<<currNode->data<<" ";
            currNode = currNode->next;
        }
    }

    void search(int data);
};


int main(){
    LinkedList list;

    list.insert(1);

    list.display();

}