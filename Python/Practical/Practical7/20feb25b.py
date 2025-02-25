# Todo List Manager: Create a function manage Todo that takes a list of to-do items and a command (‘add’, ‘remove’, ‘complete’) and modifies the list based on the command.
def add(list):
    to_add=input("Enter task to add: ")
    list.append(to_add)
    print(f"Updated List: {list}")
def remove(list):
    to_remove=input("Enter task to remove: ")
    if to_remove in list:
        list.remove(to_remove)
        print(f"Updated List: {list}")
    else:
        print("Task not found\nOld List: ",list)
def complete(list):
    completed=input(f"Enter the task you have completed from: {list} :")
    if completed in list:
        list.remove(completed)
        print("Completed List: ",completed)
        print(f"Remaining Task: {list}")
list=['Assignement','Practical','Project Report','Internship Report']
while True:
    choice=int(input("Enter your Choice\n1. Add\n2. Remove\n3. Complete\n4. Exit\n-->"))
    if choice==1:
        add(list)
    elif choice==2:
        remove(list)
    elif choice==3:
        complete(list)
    else:
        break
print(list)