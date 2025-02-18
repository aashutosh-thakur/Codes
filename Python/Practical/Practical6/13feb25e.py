# Bookstore Inventory:  As a bookstore manager, you create a list of book titles and their corresponding quantities in stock.
# Write a Python program that asks if the user is a manager or a normal user.
# Then allow the manager to create and update the list of books.
# Allow other users to search for a book title and check its availability.
# Prompt the user to enter a book title.
# If the book is in stock, display the quantity available; otherwise, show an appropriate message.
total_book=int(input("Enter the total number of item you want to add: "))
t_book=[]
for i in range(total_book):
    book_name=input("Enter the name of the Book: ")
    quantity=int(input("Enter the quantity of the Book: "))
    item={"name": book_name,"quantity": quantity}
    t_book.append(item)
while True:
    user=input("Are you a Manager or Normal user: ")
    if user=='Manager':
        choice=int(input("1. Update List\n2. Add book\n3. Exit\n-->"))
        if choice==1:
            to_find=input("Enter the book name to update the quantity: ")
            for book in t_book:
                if book["name"] == to_find:
                    new_quantity = int(input(f"Enter the new quantity for {to_find}: "))
                    book["quantity"] = new_quantity
                    print(f"Updated quantity: {new_quantity}")
                    break
                else:
                    print("This book is not in the library")
        elif choice==2:
            book_name=input("Enter the name of the book: ")
            quantity=int(input("Enter the quantity of the book: "))
            item={"name": book_name,"quantity": quantity}
            t_book.append(item)
            total_book+=1
    elif user=='Normal':
        to_find = input("Enter book name: ")
        for book in t_book:
            if book["name"] == to_find:
                print(f"Their are {book['quantity']} available")
                break
            else:
                print("This book is not available")