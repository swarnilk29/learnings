package com.example.main.repository;

import org.springframework.data.jpa.repository.JpaRepository;

import com.example.main.model.Student;

public interface StudentRepositary extends JpaRepository<Student, Integer>  {

}
