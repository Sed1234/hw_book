#include "Store.h"
#include <iostream>

int main() {
	Store a;
    a.filterBooksByAuthor("Duma");
	a.filterBooksByPublisher("N");
	a.ShowBooksAfterYear(2000);
	system("pause");
	return 0;
}
