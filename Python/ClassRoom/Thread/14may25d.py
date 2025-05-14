from threading import *
import time
def sum(num):
    for i in num:
        time.sleep(1)
        print(i+i)
def mul(num):
    for i in num:
        time.sleep(1)
        print(i*i)

num= [1,2,3,4,5]
b=time.time()
t1 = Thread(target=sum, args=(num,))
t2 = Thread(target=mul, args=(num,))
t1.start()
t2.start()
print("Active Thread", active_count())
t1.join()
t2.join()
sum(num)
mul(num)
e=time.time()
print("Active Thread", active_count())
print("total time: ", e-b)