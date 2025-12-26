package com.example.main.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.example.main.model.Book;
import com.example.main.repository.BookRepository;

@Service
public class BookServiceImpl implements BookService{
	
	@Autowired
	private BookRepository repo;
	
	@Override
	public void saveBook(Book book) {
		repo.save(book);
	}
	
	@Override
	public List<Book> getAllBooks(){
		return repo.findAll();
	}
	
	@Override
	public Book getBookById(int bookId) {
		return repo.findById(bookId).orElse(null);
	}
	
}
