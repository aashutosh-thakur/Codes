# Online Shopping Cart: Imagine you’re developing an online shopping platform. Create a Python program that simulates a user’s shopping cart.
# •    Allow the user to add product names and prices to their cart.
# •    Display the current items in the cart.
# •    Allow the user to remove items from the cart.
# •    Calculate the total price and display the total number of items in the cart.
total_input=int(input("Enter the total number of item you want to add: "))
t_item=[]
for i in range(total_input):
    item_name=input("Enter the name of the item: ")
    price=input("Enter the price of the item: ")
    item={item_name,price}
    t_item.append(item)
for i in t_item:
    print(i)