#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

void push_beg(Node **head, int data);
void print(Node **head);
void del_beg(Node** head);
void push_end(Node **head, int data);
void del_end(Node **head);
void free_node(Node** head);

int main(){
    Node* head = NULL;
    Node** p = &head;
    push_beg(p, 1);
    Node* first = head;
    push_beg(p, 2);
    push_beg(p, 3);
    del_beg(p);
    push_end(p, 4);
    del_end(p);
    print(p);
    free_node(p);
    return 0;
}

void push_beg(Node **head, int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value=data;
    newNode->next=(*head);
    (*head)=newNode;
}

void del_beg(Node** head){
    if (*head == NULL){
        return;
    }
    Node* tmp = *head;
    (*head)=(*head)->next;
    free(tmp);
}

void push_end(Node **head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void print(Node **head){
    Node* current = *head;
    for (int i = 0; current != NULL; i++){
        printf("%d\n", current->value);
        current=current->next;
    }
}

void del_end(Node **head){
    if (*head == NULL || (*head)->next == NULL){
        free(*head);
        *head = NULL;
    }
    else{
    Node* current = *head;
    while ((current->next)->next != NULL){
        current=current->next;
    }
    free(current->next);
    current->next = NULL;
    }
}

void free_node(Node** head){
    Node* current = *head;
    while( current != NULL){
    *head = current;
    free(*head);
    current = current->next;
    }

}