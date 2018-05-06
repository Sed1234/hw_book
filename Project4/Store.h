#pragma once
#include "Book.h"
#include <vector>
#include <iostream>
class Store
{
public:
	std::vector<Book> books;
	Store();
	~Store();
	std::vector<Book> filterBooksByAuthor(std::string) const;
	std::vector<Book> filterBooksByPublisher(std::string) const;
	std::vector<Book> ShowBooksAfterYear(int) const;
	
};
