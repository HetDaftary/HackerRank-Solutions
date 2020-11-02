# Enter your code here. Read input from STDIN. Print output to STDOUT

from datetime import date
import calendar

m, d, y = list(map(int, input().strip().split()))

my_date = date(y, m, d)
print((calendar.day_name[my_date.weekday()]).upper()) 
