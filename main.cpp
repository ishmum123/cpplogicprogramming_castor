#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <string>
#include "castor1.1/castor.h"

using namespace std;
using namespace castor;

relation gender(lref<string> p, lref<string> g) {
	return eq(p, "Frank") && eq(g, "male")
		|| eq(p, "Sam") && eq(g, "male")
		|| eq(p, "Gary") && eq(g, "male")
		|| eq(p, "Mary") && eq(g, "female")
		|| eq(p, "Denise") && eq(g, "female");
}

template <class T>
bool string::operator==(const T& rhs) { 
	return (this.compare(rhs) == 0);
}

int main() {
	/** lref<string> p, g;
	relation r = gender(p, g) && write(p) && write("	") && write(g) && write("\n");
	while(r()); */
	string s = "a", t = "b", u = "a";
	cout<<(s == t)<<endl;
	cout<<(s == u)<<endl;
	return 0;
}
