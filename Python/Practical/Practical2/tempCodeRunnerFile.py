year=int(input("Enter the year: "))
if year%4==0 and year%100!=0 or year%400==0:
    print("Given Year is Leap: ",year)
else:
    print("Given Year is Not a Leap: ",year)