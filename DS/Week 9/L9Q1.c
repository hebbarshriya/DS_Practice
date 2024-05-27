#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* link;
};
struct Que{
	struct Node *front,*rear;
};
struct Node* insert(int n){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=n;
	temp->link=NULL;
	return temp;
}
struct Que* createQue(){
	struct Que* q=(struct Que*)malloc(sizeof(struct Que));
	q->front=q->rear=NULL;
	return q;
}
void enQue(struct Que* q,int n){
	struct Node* temp=insert(n);
	if(q->rear==NULL){
		printf("Queue is empty\n");
		q->front=q->rear=temp;
		return;
	}
	q->rear->link=temp;
	q->rear=temp;
}
void deQue(struct Que*q){
	if(q->front==NULL){
		printf("Queue is empty\n");
		return;
	}
	struct Que* temp=q->front;
	q->front = q->front->link;
	if(q->front==NULL)
		q->rear==NULL;
	free(temp);
}
void display(struct Que*q){
	struct Node*temp=q->front;
	if(temp==NULL){
		printf("Queue is empty\n");
	}
	else{
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->link;
		}
		printf("\n");
	}
}

int main(){
	struct Que*q=createQue();
	enQue(q,10);
	enQue(q,20);
	enQue(q,30);
	display(q);
	deQue(q);
	deQue(q);
	display(q);
	enQue(q,40);
	display(q);
	return 0;
}