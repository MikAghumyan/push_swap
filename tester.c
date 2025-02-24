#include "push_swap.h"

int main(void)
{
	t_list *top = NULL;
	t_list *temp = NULL;

	// PUSH TESTER
	push(&top, 5);
	push(&top, 20);
	push(&top, 4);
	push(&top, 7);
	printf("after push: ");
	temp = top;
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");

	// SWAP TESTER
	swap(&top);
	printf("after swap: ");
	temp = top;
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");

	// GETLAST TESTER
	// printf("after getlast: %d\n", getlast(top)->data);
	// GETPRELAST TESTER
	printf("after getprelast: %d\n", getprelast(top)->data);

	// ROTATE TESTER
	rotate(&top);
	printf("after rotate: ");
	temp = top;
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");

	// RROTATE TESTER
	rrotate(&top);
	printf("after rrotate: ");
	temp = top;
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");

	// POP TESTER
	while(top)
		pop(&top);
	printf("after pop: ");
	temp = top;
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");

	return (0);
}
