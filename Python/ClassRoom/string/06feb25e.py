my_string="    Hello, World!   "
print("Original string: ", my_string)
#Find the index of a substring
index=my_string.find("World")
print("Index of 'World': ",index)
#Find the index of a substring starting from a specific position
index=my_string.find("o",5)
print("Index of 'o' starting from position 5: ",index)
#Find the Number of a substring 'l'
count=my_string.count("l")
print("Number of 'l's in the string: ",count)