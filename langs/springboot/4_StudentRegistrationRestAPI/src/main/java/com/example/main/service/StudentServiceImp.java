package com.example.main.service;

import java.util.List;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.example.main.model.Student;
import com.example.main.repository.StudentRepositary;

@Service
public class StudentServiceImp implements StudentService {
	
	@Autowired
	private StudentRepositary repository;
	
	@Override
	public Student registerStudent(Student student) {
		return repository.save(student);
	}
	
	@Override
	public List<Student> getAllStudents(){
		return repository.findAll();
	}
	
	@Override
	public Student getStudentById(int studentId) {
		return repository.findById(studentId).orElse(null);
	}
	
	@Override
	public Student updateStudent(int studentId, Student student) {
		Student existing = repository.findById(studentId).orElse(null);
		if(existing != null) {
			existing.setName(student.getName());
			existing.setCourse(student.getCourse());
			existing.setMarks(student.getMarks());
			return repository.save(existing);
		}
		return null;
	}
	
	@Override
	public void deleteStudent(int studentId){
		repository.deleteById(studentId);
	}
	
	
}
