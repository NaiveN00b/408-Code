import os
import os.path
import re

def split_chinese(strings):
    for i in range(len(strings)):
        if '\u4e00' <= strings[i] <= '\u9fa5':
            return i

file = open("C://Users/11491/Desktop/2.txt","r",encoding="utf-8")
d_file = open("C://Users/11491/Desktop/1.txt","a",encoding="utf-8")
with file as f:
    with d_file as d_f:
        for line in f.readlines():
            line = line.lstrip()
            x = split_chinese(line)
            # uncn = re.compile(r'[\u0061-\u007a,\u0020]')
            # en = "".join(uncn.findall(line))
            # # cn = re.compile(r'[\u4e00-\u9fa5]')
            # cn = "".join(cn.findall(line))
            en = line[:x]
            cn = line[x:-1]
            string = "<p>" + en + "<span class='spoiler'>" + cn + "</span></p>\n"
            d_f.write(string)
            
            
            
            

