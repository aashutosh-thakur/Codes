#!/bin/bash

# Function to get employee details from the user
get_employee_details() {
    echo "Enter the number of employees:"
    read num_employees

    for ((i = 1; i <= num_employees; i++)); do
        echo "Enter details for employee $i:"
        read -p "Name: " name
        read -p "Salary: " salary
        read -p "Branch: " branch
        read -p "Employee Code: " emp_code

        # Append details to the employee file
        echo "$name,$salary,$branch,$emp_code" >> employees.csv
    done
}

# Function to sort employees by salary (highest to lowest)
sort_by_salary() {
    echo "Sorting employees by salary (highest to lowest):"
    sort -t',' -k2 -nr employees.csv > sorted_by_salary.csv
    column -s, -t sorted_by_salary.csv
}

# Function to create branch-wise lists
create_branch_lists() {
    echo "Creating separate branch lists:"
    branches=$(awk -F, '{print $3}' employees.csv | sort | uniq)

    for branch in $branches; do
        grep ",$branch," employees.csv > "${branch}_employees.csv"
        echo "Employees in branch $branch:"
        column -s, -t "${branch}_employees.csv"
        echo
    done
}

# Main Script
echo "Welcome to the Employee Management System"
> employees.csv  # Clear any existing data

# Get employee details
get_employee_details

# Sort employees by salary
sort_by_salary

# Create branch-wise lists
create_branch_lists

echo "Hierarchy-based system setup complete!"
