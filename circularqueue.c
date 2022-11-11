#include<stdio.h>

#include<stdlib.h>

struct node {
  int data;
  struct node * next;
};
struct node * front = NULL, * rear = NULL;
void push() {
  struct node * newnode;
  newnode = (struct node * ) malloc(sizeof(struct node));
  printf("enter data\n");
  scanf("%d", & newnode -> data);
  if (front == NULL && rear == NULL) {
    rear = front = newnode;
    } 
  else{
    rear->next = newnode;
    rear = newnode;
  }

    rear -> next = front;
}
void delete() {
  struct node * temp;
  temp = front;
  if (front == NULL && rear == NULL) {
    printf("circular queue is empty");
  } else if (front == rear) {
    front = rear = NULL;
    free(temp);
  } else {
    front = front -> next;
    rear -> next = front;
    free(temp);
  }
}
void display() {
  struct node * temp;
  temp = front;
  if (front == NULL && rear == NULL) {
    printf("circular queue is empty\n");
    return;
  }
  do {
    printf("%d->", temp -> data);
    temp = temp -> next;
  } while (temp != front);

}
int main() {
  int choice;
  do {
    printf("enter choice\n");
    printf("\n1.push \n 2.delete \n 3.display \n 4.exit \n");
    scanf("%d", & choice);
    switch (choice) {
    case 1: {
      push();
      break;
    }
    case 2: {
      delete();
      break;
    }
    case 3: {
      display();
      break;
    }
    case 4: {
      break;
    }
    default: {
      printf("valid choice");
    }
    }
  } while (choice != 4);
  return 0;
}
