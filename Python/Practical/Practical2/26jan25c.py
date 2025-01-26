# Write a Python script for displaying whether the given year is a leap year from THE given condition. (THE YEAR SHOULD BE DIVISIBLE BY 4, IF THE YEAR IS DIVISIBLE BY 100 THEN IT SHOULD BE DIVISIBLE BY 400)
year=int(input("Enter the year: "))
if year%4==0 and year%100!=0 or year%400==0:
    print("Given Year is Leap: ",year)
else:
    print("Given Year is Not a Leap: ",year)