# Create a base class Employee with public, private, and protected attributes representing employee details such as name, employee ID, and salary. Implement methods to display employee details and calculate salary. Then create subclasses Manager and Developer that inherit from Employee and demostrate access to different types of attributes and methods.
class Employee:
    def __init__(self, name, employee_id, salary):
        self.name = name            # Public attribute
        self._employee_id = employee_id   # Protected attribute
        self.__salary = salary      # Private attribute
    def display_details(self):
        print("Name:", self.name)
        print("Employee ID:", self._employee_id)
        print("Salary:", self.__salary)
    def calculate_salary(self):
        return self.__salary
class Manager(Employee):
    def __init__(self, name, employee_id, salary, department):
        super().__init__(name, employee_id, salary)
        self.department = department
    def display_details(self):
        super().display_details()
        print("Department:", self.department)
class Developer(Employee):
    def __init__(self, name, employee_id, salary, programming_language):
        super().__init__(name, employee_id, salary)
        self.programming_language = programming_language
    def display_details(self):
        super().display_details()
        print("Programming Language:", self.programming_language)
manager = Manager("John Doe", "M001", 70000, "Engineering")
developer = Developer("Jane Smith", "D001", 60000, "Python")
manager.display_details()
developer.display_details()