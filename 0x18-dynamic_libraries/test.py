#!/usr/bin/python3

import ctypes
cop = ctypes.CDLL("100-operations.so")

print(cop.add(3, 4))
