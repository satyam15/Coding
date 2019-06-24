#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Ll
{
  
int data;
  struct Ll *next;
 
};

typedef struct Ll ll;

 
ll * insert_end (ll * head, int x);

void display (ll * head);

 
ll * add (ll * head1, ll * head2)
{
  
ll * p = head1, *q = head2;
  
ll * head3 = NULL;
  int val, carry = 0, carr = 0;
  
while (p != NULL && q != NULL)
    {
      
val = head1->data + head2->data;
      
carr = (val + carry) / 10000;
      
val = (val + carry) % 10000;
      
head3 = insert_end (head3, val);
      
carry = carr;
      
p = p->next;
      
q = q->next;
    
}
  
if (p != NULL)
    {
      
while (p != NULL)
	{
	  
head3 = insert_end (head3, p->data + carry);
	  
p = p->next;
	
}
    
}
  
  else if (q != NULL)
    {
      
while (q != NULL)
	{
	  
head3 = insert_end (head3, q->data + carry);
	  
q = q->next;
	
}
    
}
  
return head3;

}


 
void
display (ll * head)
{
  
ll * end = head, *p = head;
  
while (end->next != NULL)
    end = end->next;
  
while (end != head)
    {
      
p = head;
      
while (p->next != end)
	p = p->next;
      
printf ("%d", end->data);
      
end = p;
    
}
  
printf ("%d\n", head->data);

}


 
ll * insert_end (ll * head, int x)
{
  
ll * temp = (ll *) malloc (sizeof (ll));
  
temp->data = x;
  temp->next = NULL;
  
if (head == NULL)
    return temp;
  
ll * end = head;
  
while (end->next != NULL)
    
end = end->next;
  
end->next = temp;
  
return head;

}


 
int
main ()
{
  
char str1[50];
  
printf ("enter two large nos: ");
  
scanf ("%s", str1);
  
ll * head1 = NULL;
  
int l = strlen (str1) - 1, i, k, sum;
  
while (l >= 0)
    {
      
for (i = 1, sum = 0, k = 1; i <= 4 && l >= 0; i++, l--)
	{
	  
sum += k * (str1[l] - '0');
	  
k *= 10;
	
}
      
head1 = insert_end (head1, sum);
    
}
  
char str2[50];
  
scanf ("%s", str2);
  
ll * head2 = NULL;
  
l = strlen (str2) - 1;
  
while (l >= 0)
    {
      
for (i = 1, sum = 0, k = 1; i <= 4 && l >= 0; i++, l--)
	{
	  
sum += k * (str2[l] - '0');
	  
k *= 10;
	
}
      
head2 = insert_end (head2, sum);
    
}
  
ll * head3 = add (head1, head2);
  
display (head3);
  
return 0;

}

