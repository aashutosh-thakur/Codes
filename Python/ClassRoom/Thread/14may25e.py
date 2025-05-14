from threading import *
print(current_thread().getName())
def print_val():
    print("Current Thread Name: ",current_thread().getName())
    print("    ")
t= Thread(target=print_val)
t.start()
print("Current Thread Name: ",current_thread().getName())
t.isDaemon()
t.daemon
t.setDaemon(True)
t.setDaemon(False)
print(current_thread().isDaemon())