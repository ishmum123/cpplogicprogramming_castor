#include <iostream>
#include <string>
#include "castor1.1/castor.h"

using namespace std;
using namespace castor;

relation gender(lref<string> p, lref<string> g) {
	return eq(p, "Frank") && eq(g, "male")
		|| eq(p, "Sam") && eq(g, "male")
		|| eq(p, "Mary") && eq(g, "female")
		|| eq(p, "Denise") && eq(g, "female");
}

int main() {
	cout<<((gender("Sam", "male")()) ? "Yes" : "No")<<endl;
	return 0;
}
