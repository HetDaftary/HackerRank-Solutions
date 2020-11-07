import numpy as np
print(str(np.eye(*map(int,input().split()))).replace('1',' 1').replace('0',' 0'))