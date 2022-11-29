
import time 
import random
import re

def pigLatin(string):
    return re.findall('[a-zA-Z0-9 ]', string)
    
eng = input('type a word')

lst1 = pigLatin(eng)

print(lst1)

first = lst1[0]

k=0
lst1[k]=first
lst1.append('ay')
print(lst1)

str2=""
i = 0 
while i < len(lst1):
    str2+=lst1[i]
    i+=1
print(str2)