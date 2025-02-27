#!/bin/bash

# Check if SQLite3 is installed
if ! command -v sqlite3 &> /dev/null
then
    echo "SQLite3 is not installed. Please install it first."
    echo "On Ubuntu/Debian: sudo apt-get install sqlite3"
    echo "On macOS with Homebrew: brew install sqlite"
    exit 1
fi

# Database file name
DB_NAME="student_database.db"

# Remove existing database if it exists
if [ -f "$DB_NAME" ]; then
    rm "$DB_NAME"
fi

# Create the main students table
sqlite3 "$DB_NAME" << EOF
-- Create the main students table
CREATE TABLE students (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    class TEXT NOT NULL,
    subject TEXT NOT NULL,
    percentage REAL NOT NULL,
    age INTEGER NOT NULL
);

-- Create age bracket views
CREATE VIEW students_5_10 AS
SELECT * FROM students WHERE age BETWEEN 5 AND 10;

CREATE VIEW students_11_16 AS
SELECT * FROM students WHERE age BETWEEN 11 AND 16;

CREATE VIEW students_17_21 AS
SELECT * FROM students WHERE age BETWEEN 17 AND 21;

-- Sample data insertion (you can modify or remove this)
INSERT INTO students (name, class, subject, percentage, age) VALUES
('John Doe', '10A', 'Mathematics', 85.5, 15),
('Jane Smith', '8B', 'Science', 92.3, 13),
('Mike Johnson', '12C', 'Physics', 88.7, 18),
('Emily Brown', '6A', 'English', 79.6, 11),
('Alex Wilson', '3B', 'General', 90.1, 8);
EOF

# Function to add a new student
add_student() {
    read -p "Enter student name: " name
    read -p "Enter class: " class
    read -p "Enter subject: " subject
    read -p "Enter percentage: " percentage
    read -p "Enter age: " age

    sqlite3 "$DB_NAME" << EOF
INSERT INTO students (name, class, subject, percentage, age) 
VALUES ('$name', '$class', '$subject', $percentage, $age);
EOF
    echo "Student added successfully!"
}

# Function to view students by age bracket
view_age_bracket() {
    echo "Select Age Bracket:"
    echo "1. 5-10 years"
    echo "2. 11-16 years"
    echo "3. 17-21 years"
    read -p "Enter your choice (1-3): " choice

    case $choice in
        1) 
            echo "Students aged 5-10:"
            sqlite3 "$DB_NAME" "SELECT * FROM students_5_10;"
            ;;
        2) 
            echo "Students aged 11-16:"
            sqlite3 "$DB_NAME" "SELECT * FROM students_11_16;"
            ;;
        3) 
            echo "Students aged 17-21:"
            sqlite3 "$DB_NAME" "SELECT * FROM students_17_21;"
            ;;
        *) 
            echo "Invalid choice!"
            ;;
    esac
}

# Main menu
while true; do
    echo "Student Database Management"
    echo "1. Add New Student"
    echo "2. View Students by Age Bracket"
    echo "3. Exit"
    read -p "Enter your choice (1-3): " choice

    case $choice in
        1) add_student ;;
        2) view_age_bracket ;;
        3) 
            echo "Exiting..."
            exit 0
            ;;
        *) 
            echo "Invalid choice. Please try again."
            ;;
    esac
done
