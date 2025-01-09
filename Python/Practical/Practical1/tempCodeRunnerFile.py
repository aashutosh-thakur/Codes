#You are a cashier at a grocery store. Customers come to your counter with different items. Each item has a specific price (float). You must add up all the prices (float) to get the total bill (float). Write a Python program to calculate the total bill.
total_item=int(input("Enter total item: "))
add=0.0
for i in range(total_item):
    a=float(input("Enter the amount: "))
    add+=a
print("Total Bill: ",add)