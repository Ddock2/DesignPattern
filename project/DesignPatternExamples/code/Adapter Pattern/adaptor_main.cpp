#include <iostream>
#include <vector>
#include <string>
#include "adaptor_main.h"

using namespace std;
void testDuck(Duck * duck);

int main()
{
	WildTurkey * wildTurkey = new WildTurkey();
	TurkeyToDuckAdapter * adapter = new TurkeyToDuckAdapter(wildTurkey);

	testDuck(adapter);

	return 0;
}

void testDuck(Duck * duck)
{
	duck->fly();
	duck->quack();
}
