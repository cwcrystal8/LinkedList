#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "linkedlist.h"

int main(){
  srand(time(NULL));
  printf("\nInitial creation of node, a, using insert_front(NULL, rand() %c 1000):\n",'%');
  printf("Printing list, a, using print_list(a)\n");

  struct node *a = insert_front(NULL, rand() % 1000);
  int i;
  printf("a: ");
  print_list(a);

  printf("\nAdding ten random integers from [0,1000) using insert_front: \n");
  printf("Printing list after each addition using print_list(a)\n");
  for(i = 0; i < 10; i++){
    a = insert_front(a, rand() % 1000);
    printf("a: ");
    print_list(a);
  }

  printf("\nTesting free_list(a)\n");
  a = free_list(a);
  printf("return value of free_list(a): %p\n", a);
  printf("value of a after freeing it: \n");
  printf("a: ");
  print_list(a);
  //printf("value at the return value: ");
  return 0;
}
