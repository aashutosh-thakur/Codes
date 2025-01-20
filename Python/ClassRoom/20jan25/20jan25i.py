#Print the original list
numbers=[10,20,30,40,50,60,70,80,90,100]
print(f"Original list: {numbers}")
#Reverse the list
numbers.reverse()
print(f"Reversed list: {numbers}")
#Slice the list to get the first half and second half
first_half=numbers[:len(numbers)//2]
second_half=numbers[len(numbers)//2:]
print(f"First half of the list: {first_half}")
print(f"Second half of the list: {second_half}")