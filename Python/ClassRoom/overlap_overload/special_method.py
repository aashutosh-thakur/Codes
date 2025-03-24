# Magic Method
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def __add__(self, other):
        return Point(self.x + other.x, self.y + other.y)
    def __sub__(self, other):
        return Point(self.x - other.x, self.y - other.y)
    def __eq__(self, other):
        return self.x == other.x and self.y == other.y
# Usage
p1 = Point(1, 2)
p2 = Point(3, 4)
p3 = p1 + p2
# p3 = p1 - p2
print(p3.x, p3.y)  
if p1 == p2:
    print("Equal")
else:
    print("Not Equal")