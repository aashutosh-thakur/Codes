temp_details={}
total_input=int(input("Enter the total number of entry: "))
for i in range(total_input):
    City_Name=input("Enter the name of the city: ")
    City_Temp=int(input("Enter the temperature of the city in Celsius: "))
    temp_details[City_Name]=City_Temp

for city,temp in temp_details.items():
    print(f"City Name: {city}, City Temperature: {temp}°C")