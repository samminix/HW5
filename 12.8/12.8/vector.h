#ifndef VECTOR_H_
#define VECTOR_H_

template<typename T> //template
class Vector
{
private:
	int capacity;
	T* vectorArray; 
	int sizeOfVector;

public:
	Vector();
	Vector(int size);
	Vector(int size, T default);
	~Vector();
	void push_back(T element);
	int size() const;
	void new_space();
	T at(int index) const;
	void pop_back();
	bool empty() const;
	void clear();
	void swap(Vector V2);

};

#endif 