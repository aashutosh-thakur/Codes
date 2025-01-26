# You are working in a loan approval section of a bank; you need to create a Python script for "printing loan approval or not" from the following criteria. (AGE SHOULD BE GREATER THAN 18, SALARY SHOULD BE NO LESS THAN 4 LAKHS, AND CREDIT SCORE SHOULD BE NO LESS THAN 600).
Age=int(input("Enter Your Age: "))
Salary=float(input("Enter your Salary in Lakh: "))
Credit_score=float(input("Enter Your Credit Score: "))

if Age>18 and Salary>4 and Credit_score>600:
    print("Dear Customer,""\n","Your Loan has been Approved","\n","Regards,","\n","ABC BANK",sep="")
else:
    print("Dear Customer,""\n","Your Loan has not been Approved","\n","Regards,","\n","ABC BANK",sep="")