#ifndef DoublyLinkedList_H
#define DoublyLinkedList_H
#include <stdio.h>

template <class D>
struct node
{
	D value;
	node<D>* next;
	node<D>* prev;
};

template <class D> class DoublyLinkedList{
private:
	node<D>* start;
public:
	template<typename D>
	DoublyLinkedList() :start(NULL){};
	DoublyLinkedList(int _value)
	{
		node<D>* node1 = new node <D>;
		node1->value = _value;
		node1->next = NULL;
		node1->prev = NULL;
	}
	~LinkedList()
	{
		//delAll()
	};

	void add(int _value){
		node<D>* new_node = new node <D>;
		new_node->D = _value;
		new_node->next = NULL;

		node<D>* tmp = start;

		if (start == NULL){ start = new_node; }

		else{
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new_node;
		};

		
		
		
		
		
		}






	};


#endif