#include <stdio.h>  
#define SIZE 20
#include <stdlib.h>
int array[SIZE];
int top1 = -1;  
int top2 = SIZE;  

void push1 (int data)  
{  
  if (top1 < top2 - 1)  
  {  
      top1++;  
    array[top1] = data;  
  }  
  else  
  {  
    printf ("Stack is full");  
  }  
}  
void push2 (int data)  
{  
if (top1 < top2 - 1)  
  {  
    top2--;  
    array[top2] = data;   
  }  
  else  
  {  
    printf ("Stack is full..\n");  
  }  
}  
void pop1 ()  
{  
 if (top1 >= 0)  
  {  
    int popped_element = array[top1];  
    top1--;  
     
    printf ("%d is being popped from Stack 1\n", popped_element);  
  }  
  else  
  {  
    printf ("Stack is Empty \n");  
  }  
}  
void pop2 ()  
{  
   
if (top2 < SIZE)  
  {  
    int popped_element = array[top2];  
    top2--;     
    printf ("%d is being popped from Stack 1\n", popped_element);  
  }  
  else  
  {  
    printf ("Stack is Empty!\n");  
  }  
}  
void display_stack1 ()  
{  
  int i;  
  for (i = top1; i >= 0; --i)  
  {  
    printf ("%d ", array[i]);  
  }  
  printf ("\n");  
}  
void display_stack2 ()  
{  
  int i;  
  for (i = top2; i < SIZE; ++i)  
  {  
    printf ("%d ", array[i]);  
  }  
  printf ("\n");  
}  
   
int main()  
{  
  int ar[SIZE];  
  int i;  
  int num_of_ele; 
  while (free){
	int ch; 
  printf ("Enter choice: 1.Push(Stack 1) 2.Push(Stack 2) 3.Pop(Stack 1) 4.Pop(Stack 2) 5.Dispay(Stack 1) 6.Display(Stack 2) 7.Exit\n"); 
  scanf("%d",&ch); 
  switch(ch)
  {
    case 1:
    printf("Enter Value to Push in Stack 1: \n");
		scanf("%d",&i);
		
    push1(i);
		break;
	case 2:
   	printf("Enter Value to Push in Stack 2: \n");
		scanf("%d",&i);

		push2(i);
		break;
	case 3:
   	printf("Popping elements from Stack 1: \n");
		num_of_ele = top1 + 1;  
		while (num_of_ele)  
		{  
			pop1 ();  
    	--num_of_ele;  
  	} 
		break;
	case 4:
  	printf("Popping elements from Stack 2: \n");
		num_of_ele = top2 + 1;  
		while (num_of_ele)  
		{  
			pop2 ();
    	--num_of_ele;  
 		} 
		break;
	case 5:
  	printf("Displaying elements in Stack 1: \n");
		display_stack1 ();
		break;
	case 6:
  	printf("Displaying elements in Stack 2: \n");
		display_stack2 ();  
		break;
	case 7:
		exit(0);
	default:
    printf("Enter correct option");    
	}
}         
  return 0;  
}  