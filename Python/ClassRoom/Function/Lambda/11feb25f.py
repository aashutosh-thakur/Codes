def myfunc(n):
    return len(n)
#The map() function executes a specified function for each item in an iterable.
x=list(map(myfunc, ("Rashtriya ","Raksha ","University")))
print(x)