import numpy as np
import time 
array1 = np.array([2,4,6,8,10,12])
array2 = np.array([4,8,12])
set_diff = np.setdiff1d(array1, array2)
print("The set difference between array_1 and array_2 is:",set_diff)
time.sleep(100)