#pragma once
#include <iostream>
#include <string>
using namespace std;
class Stack
{
public:
	int* array;
	int pos;
	int size;
	int start;
	int end;

	Stack(int size) { //Stack(3)
		//size == 3
		array = new int[size];
		pos = 0;
		this->size = size;
		start = 0;
		end = size;
	}
	~Stack() {
		delete[] array;

	}
	void set(int value, int pos) {
		array[pos] = value;
	}

	void add(int value) {
		if (pos < size)
			set(value, pos++);
	}
	int delete_(){
		int temp_del = array[pos--];
		return temp_del;
	}
	int delete_queue() {
		int temp_del = array[0];
		size--;
		for (size_t i = 0; i < size; i++)
		{
			array[i] = array[i++];
		}
		return temp_del;
	}
	int delete_q() {

		
	}

	bool isempty()
	{
		return pos == start;
	}

};
