#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* link;
};
void push(struct Node** list, int n){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = n;
    temp->link = (*list);
    (*list) = temp;
}
  

int isPresent(struct Node* list, int n){
	struct Node* temp = list;
    while (temp != NULL) {
        if (temp->data == n)
            return 1;
        temp = temp->link;
    }
    return 0;
}
  
struct Node* getUnion(struct Node* list1,struct Node* list2)
{
    struct Node* result = NULL;
    struct Node *t1 = list1, *t2 = list2;
    while (t1 != NULL) {
        push(&result, t1->data);
        t1 = t1->link;
    }                                       
    while (t2 != NULL) {
        if (!isPresent(result, t2->data))
            push(&result, t2->data);
        t2 = t2->link;
    }
  
    return result;
}

struct Node* getIntersection(struct Node* list1,struct Node* list2)
{
    struct Node* result = NULL;
    struct Node* t1 = list1;
    while (t1 != NULL) {
        if (isPresent(list2, t1->data))
            push(&result, t1->data);
        t1 = t1->link;
    }
  
    return result;
}
  
void printList(struct Node* Node)
{
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->link;
    }
}


int main()
{
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;
    struct Node* intersecn = NULL;
    struct Node* unin = NULL;
  
    /*create a linked lists 10->15->5->20 */
    push(&list1, 20);
    push(&list1, 4);
    push(&list1, 15);
    push(&list1, 10);
  
    /*create a linked lists 8->4->2->10 */
    push(&list2, 10);
    push(&list2, 2);
    push(&list2, 4);
    push(&list2, 8);
  
    intersecn = getIntersection(list1, list2);
    unin = getUnion(list1, list2);
  
    printf("\n First list is \n");
    printList(list1);
  
    printf("\n Second list is \n");
    printList(list2);
  
    printf("\n Intersection list is \n");
    printList(intersecn);
  
    printf("\n Union list is \n");
    printList(unin);
  
    return 0;
}