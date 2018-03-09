#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char data;
	struct node* next;
	struct node* prev;
} node;

struct node* head;
struct node* tail;

struct node* create(char c){
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = c;
	new_node->prev = NULL;
	new_node->next = NULL;
	return new_node;
}

void add(char c){
	struct node* new_node = create(c);
	if(head != NULL && head != tail){
		new_node->prev = tail;
		tail->next = new_node;
		tail = new_node;
		return;
	}
	if(head == NULL){
		head = new_node;
		tail = new_node;
		return;
	}
	if(head == tail){
		head->next = new_node;
		new_node->prev = head;
		tail = new_node;
		return;
	}
	puts("shit");
	return;
}

void backspace(){
	struct node* temp = tail;
	if(tail!=head && tail->prev!=head){
		tail = tail->prev;
		tail->next = NULL;
		free(temp);
		return;
	}
	if(tail->prev == head){
		tail = head;
		tail->next = NULL;
		free(temp);
		return;
	}
	if(tail == head){
		head = NULL;
		tail = NULL;
		free(temp);
		return;
	}
	puts("shit");
	return;
}

void spit(){
	struct node* current = head;
	while(current!=NULL){
		putchar(current->data);
		current = current->next;
	}
	return;
}

int main(){
	node* head = NULL;
	node* tail = NULL;
	int size = 0;
	char c = getchar();
	while(c!='\n'){
		if(c=='<'){
			backspace();
		}else
			add(c);
		c = getchar();
	}
	spit();
	return 0;
}