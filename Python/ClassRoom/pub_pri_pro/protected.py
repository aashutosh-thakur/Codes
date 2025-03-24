class Employee:
    def __init__(self, name: str, salary: float):
        self._name=name
        self._salary=salary
    def _show_details(self):
        print(f"Employee Name: {self._name}")
        print(f"Salary: {self._salary}")
class Manager(Employee):
    def __init__(self, name: str, salary: float, department: str):
        super().__init__(name, salary)
        self._department=department
    def display_manager_details(self):
        print(f"Manager Department: {self._department}")
        self._show_details()
manager=Manager("Alice",75000,"HR")
manager.display_manager_details()
print(f"Accessing Protected Name: {manager._name}")