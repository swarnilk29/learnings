package com.example.main.service;

import java.util.List;
import com.example.main.model.Book;

public interface BookService {
	void saveBook(Book book);
	List<Book> getAllBooks();
	Book getBookById(int bookId);
	Double getTotalMarks();
}
