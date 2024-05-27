#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} node ;

typedef struct node Node;

void insertNode(Node * prev,int x) {
    Node * new = (Node *) malloc(sizeof(Node));
    new->val = x;
    new->next = prev->next;
    prev->next = new;
}

void display(Node *node) {
    while(node != NULL) {
        printf("%d ",node->val);
        node = node->next;
    }
    printf("\n");
}

void input(Node *node,int n) {
    int i,temp;
    for (i=0;i<n;i++) {
        scanf("%d",&temp);
        if (i == 0) {
            node->val = temp;
            node->next = NULL;
            continue;
        }
        insertNode(node,temp);
        node = node->next;
    }
}

void deleteNode(Node ** list, Node * tbd) {
    if (*list == tbd) {
        *list = (*list)->next;
    }
    else {
        Node * temp = (Node *) malloc(sizeof(Node));
        temp = *list;
        while (temp->next != NULL) {
            if (temp->next == tbd) {
                temp->next = tbd->next;
                break;
            }
            temp = temp->next;
        }
    }
    free(tbd);
}
void deleteDuplicates(Node **list) {
    Node * ele1 = (Node *) malloc(sizeof(Node));
    Node * ele2 = (Node *) malloc(sizeof(Node));
    ele1 = *list;
    ele2 = *list;
    while (ele1->next != NULL) {
        int x = ele1->val;
        ele2 = ele1->next;
        while (ele2 != NULL) {
            if (ele2->val != x) 
                break;
            else 
                ele2 = ele2 -> next;
        }
        if (ele2 == NULL) {
            ele1->next = NULL;
            break;
        }
        else if (ele2 != ele1->next) {
            ele1->next = ele2;
        }
        ele1 = ele1->next;
    }
}

int main() {
    int n,x;
    Node * list = (Node *) malloc(sizeof(Node));
    printf("Enter N ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    input(list,n);
    printf("Final List: ");
    deleteDuplicates(&list);
    display(list);
}