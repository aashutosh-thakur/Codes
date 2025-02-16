# Temperature Converter:  You’re building a weather app. Create a Python program that converts temperatures between Celsius and Fahrenheit.
# •    Prompt the user to enter a temperature value and a unit (C or F).
# •    Calculate and display the converted temperature.
# •    Example: If the user enters 32 C, the program should output 89.6 F.
choice=input("Enter Temperature: ")
if choice[-1:]=='F' or choice[-1:]=='f':
    if len(choice)==2:
        num=int(choice[:1])
    elif len(choice)==3:
        num=int(choice[:2])
    elif len(choice)==4:
        num=int(choice[:3]) 
    Celsius=(num-32)*5/9
    print("Fahrenheit to Celsius: ",Celsius,"C",sep="")
elif choice[-1]=='C' or choice[-1:]=='c':
    if len(choice)==2:
        num=int(choice[:1])
    elif len(choice)==3:
        num=int(choice[:2])
    elif len(choice)==4:
        num=int(choice[:3]) 
    Fahrenheit=(num*9/5)+32
    print("Celsius to Fahrenheit: ",Fahrenheit,"F",sep="")