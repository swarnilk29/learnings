package com.example.demo.models;


public class Course {
	private int courseID;
	private String courseName;
	private int courseDuration;
	
	public Course(){}

	public Course(int courseID, String courseName, int courseDuration) {
		this.courseID = courseID;
		this.courseName = courseName;
		this.courseDuration = courseDuration;
	}

	public int getCourseID() {
		return courseID;
	}

	public void setCourseID(int courseID) {
		this.courseID = courseID;
	}

	public String getCourseName() {
		return courseName;
	}

	public void setCourseName(String courseName) {
		this.courseName = courseName;
	}

	public int getCourseDuration() {
		return courseDuration;
	}

	public void setCourseDuration(int courseDuration) {
		this.courseDuration = courseDuration;
	};
	
}
