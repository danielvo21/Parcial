#ifndef _STACK_H
#define _STACK_H

template<class VALUE>
class Stack
{
private:

	VALUE*			data;
	unsigned int	mem_capacity;
	unsigned int	num_elements;

public:

	// Constructors
	Stack() : mem_capacity(0), num_elements(0), data(NULL)
	{
		Alloc(DYN_ARRAY_BLOCK_SIZE);
	}

	Stack(unsigned int capacity) : mem_capacity(0), num_elements(0), data(NULL)
	{
		Alloc(capacity);
	}

	// Destructor
	~Stack()
	{
		delete[] data;
	}

	//Pop
	bool Pop(VALUE& value)
	{
		if (num_elements > 0)
		{
			value = data[--num_elements];
			return true;
		}
		return false;
	}

	//Push
	void Push(const VALUE& element)
	{
		if (num_elements >= mem_capacity)
		{
			Alloc(mem_capacity + DYN_ARRAY_BLOCK_SIZE);
		}

		data[num_elements++] = element;
	}

	//Clear
	void Clear()
	{
		num_elements = 0;
	}

	// Utils
	unsigned int GetCapacity() const
	{
		return mem_capacity;
	}

	unsigned int Count() const
	{
		return num_elements;
	}


#endif