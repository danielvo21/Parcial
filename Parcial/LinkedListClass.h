#ifndef LinkedList
#define LinkedList
#include <stdio.h>

template <class L>
struct node
{
	L value;
	node<L>* next;
};

template <class L> class 
LinkedList
{
private:
	node<L>* start;
public:
	template<typename L>
{
	LinkedList():start(NULL){};
	/*LinkedList(int _value)
	{
		node<L>* node1 = new node < L > ;
		node1->value = _value;
		node1->next = NULL;
	}*/

	~LinkedList()
	{
		delAll();
	}
	
	void add(int _value){
		node<L>* new_node = new node < L > ;
		new_node->L = _value;
		new_node->next = NULL;
		node<L>* tmp = start;

		if (start == NULL){ start = new_node; }

		else{
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = new_node;
		};
	};

	void addPos(int _value, int pos){

		node<L>* new_node = new node<L>;
		L->value = _value;
		node<L>* tmp = start;
		
		for (int i; i < pos-1; i++)
		{
			tmp = tmp->next;
		}

		new_node->next = tmp->next;
		tmp->next = new_node;

	};
	
	void pushBack(int _value){
		node<L>* new_node = new node<L>;
		L->value = _value;
		L->next = NULL;
		node<L>* tmp = start;

		while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
		tmp->next = new_node;

	};


	void del(int n){
		struct node<L>* tmp1 = start;
		for (int i = 0; i <n - 2; i++)
		{
			tmp1 = tmp1->next;
		}
		struct node* tmp2 = tmp1->next;
		tmp1->next = tmp2->next;
		delete tmp2;	
	}; 

	void delAll(){
		if (start != NULL){
			node<L>* tmp = start;
			while (tmp->next != NULL){
				node<L>* tmp2 = tmp;
				tmp = tmp->next;
				delete tmp2;
			}
			delete tmp; start = NULL;
		}
	};

	unsigned int count() const{
		unsigned int result = 0;
		node<L>* tmp = start;
		while (tmp != NULL)
		{
			tmp = tmp->next;
			result++;
		}
		return result;
	};

	L& operator[](const unsigned int pos_node)  {
		node<L> tmp = start;
		if (!tmp){
			for (long num_node = 0; i < pos_node; i++)
			{
				tmp = tmp->next;
			}
			return tmp->value;
		}
	};
};


#endif