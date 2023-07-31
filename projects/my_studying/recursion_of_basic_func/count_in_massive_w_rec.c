#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;

void push(Node** head, int data);
void print(Node* head);
int count(Node* head);

int main(){
    Node* head = NULL;
    Node** p = &head;
    int i = 0;
    for (int i = 0; i<7;i++){
        push(p,i);
    }
    printf("%d\n", count(head));
    return 0;
}

void push(Node** head, int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = data;
    newNode->next = (*head);
    *head = newNode;
}

//recuscion without middle element
int count(Node* head){
    int res = 0;
    Node* current = head;
    if (current == NULL){
        res = 0;
    }
    else{
        res = 1 + count(current->next);
    }
    return res;
}
//

void print(Node* head){
    while(head != NULL){
        printf("%d\n", head->value);
        head=head->next;    
    }
}