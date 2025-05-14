from threading import *
import time
def job():
    print("Child thread")
    t3=Thread(target=job)
    print(t3.isDaemon())
    for i in range(10):
        time.sleep(1)
        print(i)
def job1():
    print("main thread")
    for i  in range(10):
        time.sleep(1)
        print(i)
t=Thread(target=job)
t.setDaemon(True)
t1=Thread(target=job1)
t.start()
t1.start()
time.sleep(20)