a=[1,2,3,4]
#Using custom function in "function" parameter
#This function is simply doubles the provided number
def double(val):
    return val*2
res=list(map(double,a))
print(res)