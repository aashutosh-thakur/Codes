# Data Normalizer: Write a function to normalize data that takes a list of numbers and normalizes them so that the numbers range from 0 to 1 (inclusive).
# XNew = (X - X_min) / (X_max - X_min)
def data_normalizer(list_n):
    X_min=list_n[0]
    X_max=list_n[len(list_n)-1]
    X_new=[]
    for i in range(len(list_n)):
        num=(list_n[i] - X_min) / (X_max - X_min)
        X_new.append(num)
    print(f"{X_new}")
list_n=list(map(int, input("Enter the number at: ").split()))
print(list_n)
data_normalizer(list_n)