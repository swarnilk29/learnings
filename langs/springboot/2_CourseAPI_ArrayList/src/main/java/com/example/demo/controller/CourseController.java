package com.example.demo.controller;

import java.util.ArrayList;
import java.util.List;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.example.demo.models.Course;
import org.springframework.web.bind.annotation.RequestBody;



@RestController
@RequestMapping("/courses")
public class CourseController {
	
	private List<Course> courselist = new ArrayList<>();
	
	// ADD COURSE
	@PostMapping
	public String addCourse(@RequestBody Course c) {
		courselist.add(c);
		return "Course added!";
	}
	
	// VIEW ALL COURSES
	@GetMapping
	public List<Course> viewCourses () {
		return courselist;
	}
	
	
	
}
