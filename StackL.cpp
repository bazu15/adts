#include "StackL.h"

void Stack::pop() {
	data.remove(data.size());
}

int Stack::top() {
	return data.get(data.size());
}

void Stack::clear() {
	data.clear();
}
int Stack::size() {
	return data.size();
}

void Stack::push(int k) {
	data.insert(k, data.size()+1);
}
