#include<stdio.h>
#include<stdlib.h>
struct node 
{
  
int coff;
   
int expo;
   
struct node *next;
 
};

struct node *head1 = NULL;

struct node *head3 = NULL;

struct node *head2 = NULL;

struct node *
create (struct node *head) 
{
  
int n;
  
printf ("Enter the number of nodes\n");
  
scanf ("%d", &n);
  
while (n--)
    
    {
      
printf ("enter coffienct and exponent part\n");
      
int c, e;
      
scanf ("%d%d", &c, &e);
      
struct node *tmp = (struct node *) malloc (sizeof (struct node));
      
tmp->coff = c;
      
tmp->expo = e;
      
tmp->next = NULL;
      
if (head == NULL)
	
head = tmp;
      
      else
	
	{
	  
struct node *crnt = head;
	  
while (crnt->next != NULL)
	    
crnt = crnt->next;
	  
crnt->next = tmp;
	
}
    
}
  
 
 
return head;

}


struct node *
insert (struct node *head, int cof, int expo) 
{
  
struct node *ins = (struct node *) malloc (sizeof (struct node));
  
ins->coff = cof;
  
ins->expo = expo;
  
ins->next = NULL;
  
if (head == NULL)
    
head = ins;
  
  else
    
    {
      
struct node *ins2 = head;
      
while (ins2->next != NULL)
	
ins2 = ins2->next;
      
ins2->next = ins;
    
}
  
return head;

}


struct node *
add (struct node *head1, struct node *head2) 
{
  
struct node *add1 = head1;
  
struct node *add2 = head2;
  
 
while (add1 != NULL && add2 != NULL)
    
    {
      
 
if (add1->expo > add2->expo)
	
	{
	  
head3 = insert (head3, add1->coff, add1->expo);
	  
add1 = add1->next;
	
}
      
      else if (add2->expo > add1->expo)
	
	{
	  
head3 = insert (head3, add2->coff, add2->expo);
	  
add2 = add2->next;
	
}
      
      else
	
	{
	  
head3 = insert (head3, add1->coff + add2->coff, add1->expo);
	  
add1 = add1->next;
	  
add2 = add2->next;
	
}
    
}
  
while (add1 != NULL)
    
    {
      
head3 = insert (head3, add1->coff, add1->expo);
      
add1 = add1->next;
    
}
  
while (add2 != NULL)
    
    {
      
head3 = insert (head3, add2->coff, add2->expo);
      
add2 = add2->next;
    
}
  
return head3;

}


void
display (struct node *head) 
{
  
struct node *disp = head;
  
while (disp != NULL)
    
    {
      
printf ("%dx^%d+", disp->coff, disp->expo);
      
disp = disp->next;
    
}
  
printf ("\n");

}


int
main () 
{
  
printf ("creating first polynomial\n");
  
head1 = create (head1);
  
printf ("creating second polynomial\n");
  
head2 = create (head2);
  
printf ("first polynomial\n");
  
display (head1);
  
printf ("\n");
  
printf ("second polynomial\n");
  
display (head2);
  
printf ("\n");
  
printf ("merged polynomial\n");
  
head3 = add (head1, head2);
  
display (head3);
  
return 0;

}



