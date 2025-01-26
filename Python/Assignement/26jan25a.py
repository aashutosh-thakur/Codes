# You are a sports coach and you have the heights of your players in centimeters. The heights are stored in a list. Your task is to write a Python program to calculate the average height and find out how many players are taller than the average.
heights_list=list(map(int, input("Enter the height in centemeter: ").split()))
average_height=sum(heights_list) / len(heights_list)
print("Average height of players in Centimeter: ",average_height,"cm",sep="")
print("Taller than average heigth: ",end=" ")
for num in heights_list:
    if num>average_height:
        print(num,"cm",sep="", end=" ")