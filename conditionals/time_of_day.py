# Malu Estevam, Time of Day
import time

current = time.time()
local_time = time.localtime(current)
hour = local_time.tm_hour


if hour > 6 or hour <= 11:
    print("Good morning!")
elif hour > 11 or hour <= 4:
    print("Good afternoon!")
elif hour > 4 or hour <= 7:
    print("Good evening!")
else:
    print("Go to bed, it's late")