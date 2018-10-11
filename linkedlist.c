#include <stdio.h>
#include <stdlib.h>

struct node {
  int i;
  struct node *next;
};

void print_list(struct node *current){
  printf("[");
  while((current -> next) != NULL){
    printf("%d, ", current -> i);
    current = current -> next;
  }
  printf("%d]", current -> i);
  printf("\n");
}

struct node * insert_front(struct node * start, int new_value){
  struct node* new = malloc(4);
  new -> i = new_value;
  new -> next = start;
  return new;
}

struct node * free_list(struct node *current){
  struct node* start = current;
  while((start -> next) != NULL){
    struct node* temp = (start -> next);
    free(start);
    start = temp;
  }
  free(start);
  return current;
}
