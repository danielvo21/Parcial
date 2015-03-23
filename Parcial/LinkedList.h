#include <stdio.h>


struct node{
	int value;
	node* next;
};

class List{
	node* start;
	List() :start(NULL){};
	void add(int _value);
	void del(node* n);
	unsigned int count() const;
};
