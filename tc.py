import csv

csvFile = open("data.csv",'w',newline='',encoding='utf-8')
writer = csv.writer(csvFile)
csvRow=[]

f = open("1msVt of temp.txt",'r',encoding='GB2312')
for line in f:
    csvRow=line.split()
    writer.writerow(csvRow)
f.close()
csvFile.close()
