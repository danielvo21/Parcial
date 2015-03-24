#ifndef DynamicArray_H
#define DynamicArray_H

#include <stdio.h>
#include <assert.h>
template <class TYPE>
class DynamicArray{

private:TYPE* data;
		unsigned int allocated_memory;
		unsigned int num_elements;

public: DynamicArray() : data(NULL), allocated_memory(0), num_elements(0){}
		DynamicArray(unsigned int mem_size) :data(NULL), allocated_memory(0), num_elements(0){ reallocate(mem_size); }
		~DynamicArray(){ if (data != NULL) delete[] data; }

		const TYPE &operator[](unsigned int index)const
		{
			assert(index < num_elements);
			return data[index];
		};

		TYPE& operator[](unsigned int index)
		{
			assert(index < num_elements);
			return data[index];
		}


		void reallocate(unsigned int new_mem_size){

			TYPE tmp = data;

			if (new_mem_size > 0)
			{
				delete[] data;
				memory = new_mem_size;
				data = new TYPE[mem];
				for (i = 0; i < new_mem_size; i++)
				{
					data[i] = tmp[i];
				}
				delete[] tmp;
				allocated_memory = num_elements = new_mem_size;
				
			}
		};

		void pushBack(TYPE new_data){
			if (allocated_memory == num_elements) reallocate(num_elements + 1);
			
			data[num_elements]=new_data;
			num_elements++;
		};

		int pop(){
			if (num_elements > 0){
				num_elements =- 1;
				reallocate(num_elements);
			}
		};
		void insert(TYPE new_data, unsigned int pos){
			assert(pos<num_elements);

			if (pos == num_elements){ pushBack(new_data); }

			if (num_elements + 1 > allocated_memory){ reallocate(num_elements + 1); 

			for (int i = num_elements; i > pos; i--)
			{
				data[i] = data[i-1]
			}
			data[pos] = new_data;
			num_elements = +1;
			}
		};

		void clear()
		{
			num_elements = 0;
		}
		

};



#endif