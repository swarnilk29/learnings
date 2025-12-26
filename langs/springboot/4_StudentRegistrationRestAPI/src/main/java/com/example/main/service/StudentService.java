package com.example.main.service;

import java.util.List;

import com.example.main.model.Student;

public interface StudentService {
	Student registerStudent(Student student);
	List<Student> getAllStudents();
	Student getStudentById(int studentId);
	Student updateStudent(int studentId, Student student);
	void deleteStudent(int studentId);
}

