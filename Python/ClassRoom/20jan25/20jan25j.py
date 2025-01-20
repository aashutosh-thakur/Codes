#Sort the first half in ascending order and the second half in descending order
numbers=[10,20,30,40,50,60,70,80,90,100]
numbers.reverse()
first_half=numbers[:len(numbers)//2]
second_half=numbers[len(numbers)//2:]
first_half.sort()
second_half.sort(reverse=True)
print(f"First half sorted in ascending order: {first_half}")
print(f"Second half sorted in descending order: {second_half}")

final_list=first_half+second_half
print(f"Final list: {final_list}")