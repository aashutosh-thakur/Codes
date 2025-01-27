# You are building an e-commerce website, and you need to keep track of items in a user’s shopping cart. Implement the following:
# ·        Create an empty list called shopping_cart.
# ·        Allow the user to add items (product names) to the cart.
# ·        Display the current items in the cart.
# ·        Allow the user to remove items from the cart.
# ·        Calculate the total number of items in the cart.
shopping_cart=[]
while True:
    choice=int(input("Enter the Number of your choice\n1. Add Item to the cart\n2. Display the Item in the Cart\n3. Remove Item from Cart\n4. Calculate total Item in Cart\n5. Exit\n-->"))
    if choice==1:
        single_multiple=int(input("Enter:\n1. Single Item\n2. Multiple Item\n-->"))
        if single_multiple==1:
            shopping_cart.append(input("Enter the item--> "))
        elif single_multiple==2:
            total_item=int(input("Enter total item to add--> "))
            for i in range(total_item):
                shopping_cart.append(input("Enter the item--> "))
    elif choice==2:
        print("Item in Cart: ",shopping_cart,sep="")
    elif choice==3:
        if len(shopping_cart)==0:
            print("Already Cart is Empty")
        else:
            to_remove=input("Enter the Item to remove: ")
            if to_remove in shopping_cart:
                shopping_cart.remove(to_remove)
            else:
                print("Wrong Input")
    elif choice==4:
        print("Total Number of item in Cart: ",len(shopping_cart))
    elif choice==5:
        break
    else:
        break