# You're implementing a game where players can rotatea list of numbers to the left by a given number of positions. Write a Python function rotate_list_left (numbers, positions) that takes a list of numbers and the number of positions to rotate as input, and returns a new list with the elements rotated to the left by the specified number of positions.
def rotate_list_left(numbers, positions):
    positions = positions % len(numbers)
    rotated = numbers[positions:] + numbers[:positions]
    return rotated
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
positions = 3
rotated_list = rotate_list_left(numbers, positions)
print("Rotated List:", rotated_list)