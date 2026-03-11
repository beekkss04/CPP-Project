# C++  Project
# 📚 Course Registration System

A menu-driven console application built in **C++** that simulates a student course registration workflow — browse available courses, register, drop, and view your enrolments in real time.

---

## ✨ Features

- 📋 View all available courses with live seat availability
- ✅ Register for a course (with validation)
- ❌ Drop a registered course
- 👀 View your current course list
- 🔒 Enforces capacity limits, duplicate prevention, and a 5-course max per student

---

## 🛠️ Tech Stack

| | |
|---|---|
| Language | C++ (C++11 or later) |
| Libraries | `iostream`, `string` |
| Paradigm | Procedural, struct-based |
| Interface | Console / Terminal |

---

## 🚀 Getting Started

### Prerequisites
- A C++ compiler: `g++`, `clang++`, or MSVC

### Compile & Run

```bash
# Clone the repo
git clone <repo link>
cd course-registration-system

# Compile
g++ -o course_reg course_registeration_system.cpp -std=c++11

# Run
./course_reg
```

> On Windows, the output binary will be `course_reg.exe`

---

## 🖥️ Sample Output

```
========================================
   Course Registration System
========================================
1. View Courses
2. Register Course
3. Drop Course
4. View My Registered Courses
5. Exit
-------------------------------------------
Enter your choice: 2

Available Courses
1: CS10x - Data Science                  | Seats left = 3
2: CS11x - Web Development               | Seats left = 2
3: CS12x - Artificial Intelligence       | Seats left = 2
4: CS13x - Cyber Security                | Seats left = 3
5: CS14x - Computer Science Foundation   | Seats left = 4

Enter Sr. No. of course to register: 1
Registered successfully
Course Code: CS10x
```

---

## 📁 Project Structure

```
course-registration-system/
│
├── course_registeration_system.cpp   # Main source file
└── README.md                         # Project documentation
```

---

## ⚙️ How It Works

The system uses a `Course` struct to store each course's code, name, capacity, and current enrolment count. A global array of 5 courses acts as the catalogue, while a parallel `string` array tracks the student's registrations.

**Validation on registration:**
1. Checks if the student is already enrolled in the course
2. Checks if seats are available
3. Checks if the student has reached the 5-course limit

**Drop operation** uses array left-shift compaction to remove a course and restores the seat count in the catalogue.

---

## 📋 Available Courses

| Code | Course | Capacity |
|------|--------|----------|
| CS10x | Data Science | 3 |
| CS11x | Web Development | 2 |
| CS12x | Artificial Intelligence | 2 |
| CS13x | Cyber Security | 3 |
| CS14x | Computer Science Foundation | 4 |

---

## 📚 Case Study

This project is submitted as **Case Study 115** for the School of Future Tech.

**Learning Outcomes:**
- Academic registration logic using C++
- Arrays and structs for structured data management
- Menu-driven program design
- Input validation and error handling

---

## 📄 License

This project is for educational purposes. Feel free to use and modify it for your own learning.
