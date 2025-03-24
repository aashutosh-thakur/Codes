class BankAccount:
    def __init__(self, account_holder: str, balance: float):
        self.__account_holder=account_holder
        self.__balance=balance
    def __calculate_interest(self):
        return self.__balance*0.03
    def get_account_info(self):
        interest=self.__calculate_interest()
        return f"Account Holder: {self.__account_holder}, Balance: {self.__balance}, Interest: {interest}"
account=BankAccount("John Doe", 10000)
print(account.get_account_info())
print(f"Accessing Private Balance via Name Mangling: {account._BankAccount__balance}")