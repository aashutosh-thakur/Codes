# Imagine you are developing a finance application that calculates compound interest for investments. Your task is to create a Python program that takes user input for the principal amount, interest rate, and period and then computes the compound interest using the provided numeric data types. Ensure the program handles various scenarios such as interest rates and periods accurately.
principal_amount=int(input("Enter the Principal Amount: "))
interest_rate=float(input("Enter the Interest Rate: "))
time_period=float(input("Enter the time period monthly: "))
compunded_interest_per_year=int(input("Enter the compunded interest per year: "))
a= float((interest_rate / 100) / compunded_interest_per_year)
power=float(compunded_interest_per_year*(time_period/12))
compound_interest= principal_amount * ((1 + a )** power)
print("Compound Interest: ",compound_interest)