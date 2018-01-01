#include<stdio.h>
#include<malloc.h>


struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL InsertFirst(PPNODE,int);
BOOL InsertLast(PPNODE,int);
BOOL InsertAtPos(PPNODE,int,int);
BOOL DeleteLast(PPNODE);
BOOL DeleteAtPos(PPNODE,int);
BOOL DeleteFirst(PPNODE);
void display(PNODE);
int count(PNODE);

int main()
{
	PNODE head=NULL;
	BOOL bRate=TRUE;
	
	bRate=InsertFirst(&head,11);	
	bRate=InsertFirst(&head,21);
	bRate=InsertFirst(&head,51);
	bRate=InsertFirst(&head,101);
	bRate=InsertFirst(&head,151);

	
	display(head);
	bRate=DeleteAtPos(&head,3);
	printf("\n Deleting postion 3");
	display(head);
	//bRate=DeleteFirst(&head);
	
	//bRate=InsertAtPos(&head,151,2);
	//display(head);
	//bRate=InsertLast(&head,101);
	//display(head);
	//bRate=DeleteLast(&head);
	//printf("\nAfter Deleteing last NODE");
	//display(head);
	
	return 0;
}

	BOOL InsertFirst(PPNODE first,int no)
	{
		PNODE newn=NULL;
		newn=(PNODE)malloc(sizeof(NODE));
		if(newn==NULL)
		{
			return FALSE;
		}
		newn->data=no;
		newn->next=NULL;
		if(*first==NULL)
		{
			*first=newn;
		}
		else
		{
			newn->next=*first;
			*first=newn;
		}
		return TRUE;
	}

	BOOL InsertLast(PPNODE first,int no)
	{
		PNODE newn=NULL;
		PNODE temp=NULL;
		newn=(PNODE)malloc(sizeof(NODE));
			
		newn->data=no;
		newn->next=NULL;
		if(*first==NULL)
		{
			*first=newn;
		}
		
		else
		{
			temp=*first;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}
		return TRUE;
	}


	BOOL InsertAtPos(PPNODE first,int no,int ipos)
	{
		PNODE newn=NULL;
		PNODE temp=NULL;
		int icnt=0,i=0;
		
		icnt=count(*first);
	
		if((ipos<=0)&&(ipos>icnt+1))
		{
			return FALSE;
		}
		
		if(ipos==1)
		{
			return(InsertFirst(first,no));
		}
		else if(ipos==icnt+1)
		{
			return(InsertLast(first,no));
		}	
		else
		{

			newn=(PNODE)malloc(sizeof(NODE));
			newn->data=no;
			newn->next=NULL;
			temp=*first;
			for(i=0;i<(ipos-2);i++)
			{
				temp=temp->next;
			}
		newn->next=temp->next;
		temp->next=newn;
		}
		return TRUE;
	}
		
	BOOL DeleteLast(PPNODE first)
	{
		PNODE temp=NULL;
		int icnt=0,i=0;
		if(*first==NULL)
		{
			return FALSE;
		}
		if((*first)->next==NULL)
		{
			free(*first);
			*first=NULL;
		}		

		else
		{
		temp=*first;
		icnt=count(*first);
		for(i=1;i<icnt-1;i++)
		{	
		temp=temp->next;
		}	
		free(temp->next);
		temp->next=NULL;
		}
		return TRUE;
	}
			




	BOOL DeleteFirst(PPNODE first)
	{
		PNODE temp=NULL;

		if(*first==NULL)
		{
			return FALSE;
		}
		
		else
		{
		temp=*first;
		*first=(*first)->next;
		free(temp);
		}
		return TRUE;
	}
	
 	BOOL DeleteAtPos(PPNODE first,int ipos)
	{
		PNODE temp1=NULL,temp2=NULL;	
		int icnt=0,i=0;
			
		icnt=count(*first);
		
		if((ipos<1)||(ipos>icnt))
		{
			return FALSE;
		}

		if(ipos==1)
		{
			return(DeleteFirst(first));
		}

		else if(ipos==icnt)
		{
		return(DeleteLast(first));
		}

		else
		{

		temp1=*first;
		for(i=0;i<(ipos-2);i++)
		{
			temp1=temp1->next;
		}
		temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2);
		}
		return TRUE;
	}		
	
		


	int count(PNODE first)
	{
		int icnt=0;
		while(first!=NULL)	
		{
			icnt++;
			first=first->next;
		}
	return icnt;
	}
		
	

	void display(PNODE first)
	{
		while(first!=NULL)
		{
			printf("\n%d",first->data);
			first=first->next;
		}
	}
			





