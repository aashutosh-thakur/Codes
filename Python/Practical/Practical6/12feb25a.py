# Online Shopping Cart: Imagine you’re developing an online shopping platform. Create a Python program that simulates a user’s shopping cart.
# •    Allow the user to add product names and prices to their cart.
# •    Display the current items in the cart.
# •    Allow the user to remove items from the cart.
# •    Calculate the total price and display the total number of items in the cart.
total_input=int(input("Enter the total number of item you want to add: "))
t_item=[]
for i in range(total_input):
    item_name=input("Enter the name of the item: ")
    price=float(input("Enter the price of the item: "))
    item={"name": item_name,"price": price}
    t_item.append(item)
while True:
    choice=int(input("Choose\n ->1. Add item to cart\n ->2. Display Current item\n ->3. Remove item from cart\n ->4. Total price and Total item\n ->5. Exit\n--> "))
    if choice==1:
        item_name=input("Enter the name of the item: ")
        price=float(input("Enter the price of the item: "))
        item={"name": item_name,"price": price}
        t_item.append(item)
        total_input+=1
    elif choice == 2:
        if len(t_item) == 0:
            print("No items in the cart.")
        else:
            for item in t_item:
                print(f"Item: {item['name']}, Price: {item['price']}")
    elif choice == 3:
        to_remove = input("Enter item to remove: ")
        item_to_remove = None
        for item in t_item:
            if item["name"].lower() == to_remove.lower(): 
                item_to_remove = item
                break
        if item_to_remove:
            t_item.remove(item_to_remove)
            print(f"Item '{to_remove}' removed.")
            total_input-=1
        else:
            print(f"Item '{to_remove}' not found in the cart.")
    elif choice==4:
        total_price = sum(item["price"] for item in t_item)
        print("Total Item",total_input)
        print("Total price: ",total_price)
    elif choice==5:
        break
    else:
        print("Ivalid Number\nChoose a valid number")
        True