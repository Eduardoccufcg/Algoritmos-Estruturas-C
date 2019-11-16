#define MAX 2
#include <stdlib.h>
#include <stdio.h>

struct stack{

	int array[MAX];
	int top;
};

void init(struct stack *s){
	s->top = -1;
};

int isEmpty(struct stack *s){
	if (s->top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(struct stack *s){
	if (s->top == MAX - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int push(struct stack *s, int value){
	if (!isFull(s))
	{
		s->array[++s->top] = value;
		return 0;
	}
	else
	{
		printf("\nStack is full");
		return 1;
	}
}

int pop(struct stack *s){
	if (!isEmpty(s))
	{
		return s->array[s->top--];
	}
	else
	{
		printf("\nStack is Empty");
		return -239952128;
	}
}

int top(struct stack *s){
	if (!isEmpty(s))
	{
		return s->array[s->top];
	}
	else
	{
		printf("\nStack is Empty");
		return -239952128;
	}
}

int main()
{
	struct stack *a;
	a = malloc(sizeof(struct stack));
	init(a);
	push(a, 2);
	printf("%d", top(a));
	push(a, 3);
	printf("\n%i", top(a));
	push(a, 6);
	pop(a);
	pop(a);
	pop(a);
	free(a);
}