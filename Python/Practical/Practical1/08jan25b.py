#You are tasked with building an email automation system for a marketing campaign. Your program must generate personalized email messages for customers based on their names and recent purchases. Develop a Python script that utilizes string operations to construct dynamic email templates by inserting customer names and product details into predefined message formats.
f_name=input("Enter your First Name: ")
l_name=input("Enter your Last Name: ")
product=input("Enter the product name: ")
print("\nTo: ", l_name,f_name,"@gmail.com",sep="")
print("\nDear Customer,\nYour item ",product,"has been skipped successfully\nRegards,\nCompany Name")