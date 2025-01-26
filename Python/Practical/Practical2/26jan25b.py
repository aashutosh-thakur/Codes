# You are working in a weather monitoring station. create a Python script to read temperature from the user and convert it from Celsius to Fahrenheit or vice versa after that print weather is frizzing, cold, moderate, or hot.
temp_f_or_c=input("Enter\n1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n:-")
fahrenheit=0.0
celsius=0.0
if temp_f_or_c==1:
    celsius=float(input("Enter the Temperature in Celsius: "))
    fahrenheit=(celsius * ( 9 / 5 )) + 32
else:
    fahrenheit=float(input("Enter the Temperature in Fahrenheit: "))
    celsius=(fahrenheit-32)*(5/9)

if celsius <= 0:
    print("Its frizzing\nTemperature: \n","Fahreheit: ",fahrenheit,"\nCelsius: ",celsius,sep="")
elif celsius >= 1 and celsius <= 10:
    print("Its Cold\nTemperature: \n","Fahreheit: ",fahrenheit,"\nCelsius: ",celsius,sep="")
elif celsius >= 11 and celsius <= 21:
    print("Its Moderate\nTemperature: \n","Fahreheit: ",fahrenheit,"\nCelsius: ",celsius,sep="")
elif celsius <= 22:
    print("Its Hot\nTemperature: \n","Fahreheit: ",fahrenheit,"\nCelsius: ",celsius,sep="")