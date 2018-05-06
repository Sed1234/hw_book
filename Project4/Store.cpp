#include "Store.h"



Store::Store()
{
	books.push_back(Book("Dostoevskiy", "Crime and Punishment", "N", 2018, 400));
	books.push_back(Book("Duma", "3 mushketers", "Y", 2001, 398));
	books.push_back(Book("Tolstoy", "War and Peace I", "Y", 1999, 600));
	books.push_back(Book("Pushkin", "Eyvgenyi Onegin", "N", 1995, 350));
	books.push_back(Book("Bulgakov", "Master and Margarita", "Y", 2015, 542));
	books.push_back(Book("Tolkien", "Lord of the ring I II III", "U", 2018, 1200));
	books.push_back(Book("Martin", "Game of thone I", "N", 2008, 455));
}

Store::~Store()
{
}

std::vector<Book> Store::filterBooksByAuthor(std::string author) const
{
	std::vector<Book> result;
	for (Book book : books)
	{
		if (book.author == author)
		{
			result.push_back(book);
			std::cout << book.author<< " "<<book.name<<" "<<book.numberOfPages<<" "<<book.year<< std::endl;
		}
	}
	
	return result;
}

std::vector<Book> Store::filterBooksByPublisher(std::string publisher) const
{
	std::vector<Book> result;
	for (Book book : books)
	{
		if (book.publisher == publisher)
		{
			result.push_back(book);
			std::cout << book.author << " " << book.name << " " << book.numberOfPages << " " << book.publisher << " " << book.year << std::endl;
		}
	}
	return result;
}

std::vector<Book> Store::ShowBooksAfterYear(int year) const
{
	std::vector<Book> result;
	for (Book book : books)
	{
		if (book.year >= year)
		{
			result.push_back(book);
			std::cout << book.author << " " << book.name << " " << book.numberOfPages <<" "<<book.publisher<< " " << book.year << std::endl;
		}
	}
	return result;
}
