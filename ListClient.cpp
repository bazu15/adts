#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
for(int k = 0; k < 10; k++)
	 	L1.insert(k, k+1);
	 L1.display();
	 cout<<L1.get(6)<<endl;
	 L1.clear();
	 L1.insert(3, 1);
	 L1.display();

}
