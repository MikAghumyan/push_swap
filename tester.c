#include "includes/push_swap.h"

void	print_stack(t_list *temp)
{
	while (temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*top;
	t_list	*a;
	t_list	*b;

	top = NULL;
	// PUSH TESTER
	push(&top, 5);
	push(&top, 20);
	push(&top, 4);
	push(&top, 7);
	printf("after push: ");
	print_stack(top);
	// SWAP TESTER
	swap(&top);
	printf("after swap: ");
	print_stack(top);
	// GETLAST TESTER
	// printf("after getlast: %d\n", getlast(top)->data);
	// GETPRELAST TESTER
	printf("after getprelast: %d\n", getprelast(top)->data);
	// ROTATE TESTER
	rotate(&top);
	printf("after rotate: ");
	print_stack(top);
	// RROTATE TESTER
	rrotate(&top);
	printf("after rrotate: ");
	print_stack(top);
	// POP TESTER
	while (top)
		pop(&top);
	printf("after pop: ");
	print_stack(top);

	for (int i = 1; i <= 5; i++)
		push(&a, i);
	for (int i = 1; i <= 5; i++)
		push(&b, i);
	print_stack(a);
	print_stack(b);

	pa(&a, &b);
	print_stack(a);
	print_stack(b);
	pb(&b, &a);
	print_stack(a);
	print_stack(b);

	sa(&a);
	print_stack(a);
	ra(&a);
	print_stack(a);
	rra(&a);
	print_stack(a);
	sa(&a);

	sb(&b);
	print_stack(b);
	rb(&b);
	print_stack(b);
	rrb(&b);
	print_stack(b);
	sb(&b);

	ss(&a, &b);
	print_stack(a);
	print_stack(b);
	rr(&a, &b);
	print_stack(a);
	print_stack(b);
	rrr(&a, &b);
	print_stack(a);
	print_stack(b);

	printf("%d \t", ft_atolli("0"));
	printf("%d \t", ft_atolli("9"));
	printf("%d \t", ft_atolli("9999999"));
	printf("%d \t", ft_atolli("2147483647"));
	printf("%d \t", ft_atolli("999999999999999999999"));
	printf("%d \t", ft_atolli("-9999999"));
	printf("%d \t", ft_atolli("-2147483648"));
	printf("%d \t", ft_atolli("-999999999999999999999"));

	return (0);
}
