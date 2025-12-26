package com.example.main.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

import com.example.main.model.Book;
import com.example.main.service.BookService;

@Controller
public class BookController {
	
	@Autowired
	private BookService service;
	
	// Home Page
	@GetMapping("/")
	public String home() {
		return "index";
	}
	
	// Show Add Book Form
	@GetMapping("/addBook")
	public String showAddBookForm(Model model) {
		model.addAttribute("book", new Book());
		return "addBook";
	}
	
	// Save Book
	@PostMapping("/saveBook")
	public String saveBook(@ModelAttribute Book book) {
		service.saveBook(book);
		return "redirect:/viewBooks";
	}
	
	// View All Books
	@GetMapping("/viewBooks")
	public String viewBooks(Model model) {
		model.addAttribute("books", service.getAllBooks());
		return "viewBooks";
	}
	
	// Search Book by ID
    @GetMapping("/searchBook")
    public String searchBook(@RequestParam int bookId, Model model) {
        Book book = service.getBookById(bookId);
        model.addAttribute("book", book);
        return "searchResult";
    }
}
