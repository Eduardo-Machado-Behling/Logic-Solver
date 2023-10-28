#pragma once

typedef struct stack_t stack_t;

stack_t *stack_create(void);

void stack_push();
void stack_pop();
void stack_peek();

void stack_destroy(stack_t *stack);