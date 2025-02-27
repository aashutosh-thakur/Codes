DB_FILE="students.db"
if [ ! -f "$DB_FILE" ]; then
    sqlite3 "$DB_FILE" << EOF
CREATE TABLE students (
    name TEXT,
    class TEXT,
    subject TEXT,
    percentage REAL,
    age INTEGER
);
EOF
fi
add_new_data() {
    clear
    read -p "Enter the Name: " name
    read -p "Enter the Class: " class
    read -p "Enter the Subject: " subject
    read -p "Enter the Percentage: " percentage
    read -p "Enter the Age: " age
    sqlite3 "$DB_FILE" << EOF
INSERT INTO students (name, class, subject, percentage, age) 
VALUES ('$name', '$class', '$subject', $percentage, $age);
EOF
    echo "Data added successfully!"
    read print_choice
    if [ "$print_choice" == "y" ] || [ "$print_choice" == "Y" ]; then
        print_all_data
    fi
}
print_all_data() {
    clear
    echo "All Student Data:"
    echo "----------------"
    sqlite3 "$DB_FILE" "SELECT name, class, subject, percentage, age FROM students;" | 
    while IFS='|' read -r name class subject percentage age
    do
        echo "Name: $name"
        echo "Class: $class"
        echo "Subject: $subject"
        echo "Percentage: $percentage"
        echo "Age: $age"
        echo "----------------"
    done
}
visit_data() {
    clear
    echo "Select Age Group:"
    echo "1. 5-10 years"
    echo "2. 11-16 years"
    echo "3. 17-21 years"
    echo "4. All Students"
    read -p "Enter your choice (1-4): " group
    case $group in
        1)
            echo "Students aged 5-10:"
            sqlite3 "$DB_FILE" "SELECT name, class, subject, percentage, age FROM students WHERE age >= 5 AND age <= 10;" |
            while IFS='|' read -r name class subject percentage age
            do
                echo "Name: $name"
                echo "Class: $class"
                echo "Subject: $subject"
                echo "Percentage: $percentage"
                echo "Age: $age"
                echo "----------------"
            done
            ;;
        2)
            echo "Students aged 11-16:"
            sqlite3 "$DB_FILE" "SELECT name, class, subject, percentage, age FROM students WHERE age >= 11 AND age <= 16;" |
            while IFS='|' read -r name class subject percentage age
            do
                echo "Name: $name"
                echo "Class: $class"
                echo "Subject: $subject"
                echo "Percentage: $percentage"
                echo "Age: $age"
            done
            ;;
        3)
            echo "Students aged 17-21:"
            sqlite3 "$DB_FILE" "SELECT name, class, subject, percentage, age FROM students WHERE age >= 17 AND age <= 21;" |
            while IFS='|' read -r name class subject percentage age
            do
                echo "Name: $name"
                echo "Class: $class"
                echo "Subject: $subject"
                echo "Percentage: $percentage"
                echo "Age: $age"
            done
            ;;
        4)
            print_all_data
            return
            ;;
        *)
            echo "Invalid choice!"
            ;;
    esac
}
while true
do
    clear
    echo "Student Database Management"
    echo "1. Enter New Data"
    echo "2. View Data"
    echo "3. Print All Data"
    read -p "Enter your choice (or press Ctrl+C to exit): " a
    case $a in
        1)
            add_new_data
            ;;
        2)
            visit_data
            ;;
        3)
            print_all_data
            ;;
        *)
            echo "Invalid choice!"
            read -p "Press Enter to continue..."
            ;;
    esac
done
