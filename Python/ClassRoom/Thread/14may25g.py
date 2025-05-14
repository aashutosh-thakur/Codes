from threading import *
import time
l=Lock()
def job():
    l.acquire()
    for i in range(5):
        print(current_thread().getName())
t=Thread(target=job)
t1=Thread(target=job)
