#include<stdio.h>
#include<stdlib.h>
struct node 
{
  
int data;
   
struct node *next;
 
};

struct node *head = NULL;

struct node *
create (struct node *head, int n) 
{
  
 
while (n--)
    
    {
      
struct node *tmp;
      
tmp = (struct node *) malloc (sizeof (struct node));
      
printf ("Enter element\n");
      
int x;
      
scanf ("%d", &x);
      
tmp->data = x;
      
tmp->next = NULL;
      
if (head == NULL)
	
	{
	  
head = tmp;
	
}
      
      else
	
	{
	  struct node *crnt = head;
	  
 
while (crnt->next != NULL)
	    
	    {
	      
crnt = crnt->next;
	    
}
	  
crnt->next = tmp;
	
}
    
 
}
  
return head;

}


struct node *
merge (struct node *head) 
{
  
struct node *mrg;
  
struct node *mrg2;
  
mrg = head;
  
mrg2 = head;
  
if (head == NULL)
    
    {
      
printf ("list is empty\n");
      
return NULL;
    
 
}
  
  else if (head->next == NULL)
    
return head;
  
  else
    
    {
      
while (mrg != NULL && mrg2 != NULL && mrg2->next != NULL)
	
	{
	  
mrg = mrg->next;
	  
mrg2 = mrg2->next->next;
	
}
      
struct node *tmp4 = mrg->next;
      
mrg->next = NULL;
      
mrg2->next = head;
      
head = tmp4;

} 
} 
void

display (struct node *head) 
{
  
struct node *disp = head;
  
while (disp != NULL)
    
    {
      
printf ("%d\n", disp->data);
      
disp = disp->next;
    
}

 
}


int
main () 
{
  
int n;
  
printf ("Enter the number of nodes\n");
  
scanf ("%d", &n);
  
head = create (head, n);
  
printf ("list before operation\n");
  
display (head);
  
printf ("list after operation\n");
  
head = merge (head);
  
display (head);
  
return 0;

}



