with open('cpp_res.txt') as f:
	lines = f.readlines()
x = []
for i in lines:
	if "real" in i:
		x.append(i[9:12])
y = 0
for i in x:
	y += float(i)/1000

print "The average was"
print y/40
print "seconds" 
		
	
