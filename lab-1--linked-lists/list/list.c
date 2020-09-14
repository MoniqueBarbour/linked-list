// list/list.c
// 
// Implementation for linked list.
//
// <Author>

#include <stdio.h>

#include "list.h"
#include "stdlib.h"

list_t *list_alloc() {
  list_t * head = NULL;
  head = malloc(sizeof(list_t));
  return head;
}
void list_free(list_t *l) {
  free(l);
}

void list_print(list_t *l) {
  node_t* temp = l->head;
  
  while(temp != NULL){
    printf("%d ",temp->value);
    temp = temp->next;
  }
}
int list_length(list_t *l) { 
  node_t* temp = malloc(sizeof(node_t*));
  temp = l->head;
  i++; 
  while(temp->next != NULL){
    temp = temp->next;
    i++;
  }
  printf("The length is: %d ",i);
  }

void list_add_to_back(list_t *l, elem value) {  
  node_t* temp = malloc(sizeof(node_t*));
  temp = l->head;
  while(temp != NULL){
    temp = temp->next;
  }
  node_t* newHead = malloc(sizeof(node_t*));
  newHead->value = value;
  temp->next= l-> head;
}

void list_add_to_front(list_t *l, elem value) {
  
  node_t* newHead = malloc(sizeof(node_t*));
  newHead->value = value;
  newHead->next= l-> head;
  l->head = newHead;
 
}
void list_add_at_index(list_t *l, elem value, int index) {
  node_t* temp = malloc(sizeof(node_t*));
  temp = l->head;
  int i = 0; 
  while(i!= index-1){
    temp = temp->next;
    i++;
  }
  
  node_t* newHead = malloc(sizeof(node_t*));
  newHead->value = value;
  newHead->next= temp->next;
  temp->next = newHead;
  
}

elem list_remove_from_back(list_t *l) {
  node_t* temp = malloc(sizeof(node_t*));
  temp = l->head;
  while(temp->next->next != NULL){
    temp = temp->next;
  }
  int x = temp->next->value;
  temp->next = NULL;
  return x;
  }

elem list_remove_from_front(list_t *l) {
  node_t* temp = malloc(sizeof(node_t*));
  temp = l->head;
  l->head = l->head->next;
  return x; 
}

elem list_remove_at_index(list_t *l, int index) { 
  node_t* temp = malloc(sizeof(node_t*));
  temp = l->head;
  int i = 0;
  if(index == 0){
    list_add_to_front(l, value);
  }
  while(i != index-1){
    temp = temp->next;
    i++;
  }
  node_t* newHead = malloc(sizeof(node_t*));
  newHead->value = value;
  newHead->next = temp->next;
  temp->next = newHead;
  
  return x; }

bool list_is_in(list_t *l, elem value) {
  if(!l){
    printf("This is not in the list.");
    return;
  }
  node_t* temp = l->head;
  while(temp->next){
    temp = temp->next;
  }
  return temp->value == value; 
}
elem list_get_elem_at(list_t *l, int index) { 
  if(!l){
    printf("This is not in the list.");
    return;
  }
  int i = 0;
  node_t* temp = l->head;
  while(temp->next != NULL && i < index){
    temp= temp->next;
    i++;
  }
  return t->value; 
}
int list_get_index_of(list_t *l, elem value) { return -1; }