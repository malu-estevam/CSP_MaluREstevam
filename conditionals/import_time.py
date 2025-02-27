# Malu Estevam, How to import time in Python
import time

# first instance of time in programming
# print(time.gmtime(0))

# current time in seconds since gmtime
current = time.time()

# current time as we are used to seeing it
now = time.ctime(current)
print(now)

# get just the hour
local_time = time.localtime(current)
hour = local_time.tm_hour
minutes = local_time.tm_min
print(hour)