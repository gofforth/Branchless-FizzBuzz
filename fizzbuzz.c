#include <stdio.h>
#include <stdlib.h>

const char* fizzbuzz[] = {
	"fizzbuzz\n",   //  0
	"%d\n",         //  1
	"%d\n",         //  2
	"fizz\n",       //  3
	"%d\n",         //  4
	"buzz\n",       //  5
	"fizz\n",       //  6
	"%d\n",         //  7
	"%d\n",         //  8
	"fizz\n",       //  9
	"buzz\n",       // 10
	"%d\n",         // 11
	"fizz\n",       // 12
	"%d\n",         // 13
	"%d\n"          // 14
};

void loop(int);
void doexit(int);

void(*func[])(int) =
{
	loop,
	doexit
};

void loop(int i) 
{
	printf(fizzbuzz[i % 15], i);
	++i;
	func[i == 100](i);
}

void doexit(int) 
{
	exit(0);
}

int main()
{
	loop(1);
	return 0;
}

