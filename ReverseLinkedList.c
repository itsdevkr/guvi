#include <stdio.h>
#include <stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*head;
struct Node * create(int A[],int n)
{
	int i;
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data=A[0];
	newNode->next=NULL;
	head=newNode;
	for(i=1;i<n;i++)
	{
		struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data=A[i];
		temp->next=NULL;
		newNode->next=temp;
		newNode=temp;
	}
	return head;
}
struct Node * reverse(struct Node *p)
{
	struct Node *q=NULL,*r=NULL;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
	return head;
}
void display(struct Node *p,int n)
{
	int c=0;
	while(p!=NULL)
	{
		
		printf("%d",p->data);
		
		p=p->next;
		if(p!=NULL)
		printf("->");
	}
}
int main(void) {
	// your code goes here
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	create(A,n);
	reverse(head);
	display(head,n);
	return 0;
}
