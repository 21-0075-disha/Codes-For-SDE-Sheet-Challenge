from os import *
from sys import *
from collections import *
from math import *

def maximumProduct(nums, n):
    res = nums[0]
    curr_max,curr_min = 1,1
    for n in nums:
        vals = (n, curr_max*n, curr_min*n)
        curr_max,curr_min = max(vals),min(vals)
        res = max(res,curr_max)
    return res
