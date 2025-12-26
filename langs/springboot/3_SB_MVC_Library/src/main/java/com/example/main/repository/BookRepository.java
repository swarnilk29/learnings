package com.example.main.repository;

import org.springframework.data.jpa.repository.JpaRepository;
import com.example.main.model.Book;

public interface BookRepository extends JpaRepository<Book, Integer> {

}
