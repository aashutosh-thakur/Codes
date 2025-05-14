from threading import *

class MyThread(Thread):
    def run(self):
        for i in range(10):
            print(i, "child thread\n")
t=MyThread()
t.start()
for i in range(10):
    print(i, "main thread\n")