#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");
  list_t *myList = list_alloc();
  
  list_print(myList);
  list_add_to_front(myList, 4);
  list_add_to_back(myList, 7);
  list_add_at_index(myList, 3, 4);
  
  list_print(myList);
  list_remove_from_back(myList);
  list_print(myList);
  
  printf("%d \n", list_length(myList))
  list_is_in(myList, 4);
  list_get_elem_at(myList, 3);
  
  return 0;
}