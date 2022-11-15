import numpy as np
import time
import math

vector = np.vectorize(math.log)
vector2 = np.vectorize(math.log10)
vector3 = np.vectorize(math.log2)

arr = np.array([1., 2.71828183, 7.3890561 ])

print(vector(arr))
print(vector2(arr))
print(vector3(arr))

time.sleep(100)