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

		void reallocate(int new_mem_size){

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
				allocated_memory = num_elements = new_mem_size;
				
			}
		};
			/*
			for (int i = 0; i < new_mem_size; i++)
			{
				resized[i] = arr[i];

			}
			num_elements = allocated_memory = new_mem_size;
			arr = resized;
			delete[] resized;
			};
	*/
/*
		void pushBack(int new_data){
			if (allocated_memory == num_elements) reallocate(num_elements + 1);
			data[num_elements]=new_data;
			num_elements++;
		};

		int pop(){
			if (num_elements>0) num_elements--;
		};
		
		
		void insert(int value, unsigned int pos){
		
		
		};
*/

};



#endif