arr = [1,3,5,7,9,2,4,6,8,0]

for i in 0..9
	for j in 0..9
		if arr[j] > arr[i]
			temp = arr[i]
			arr[i] = arr[j]
			arr[j] = temp
		end
	end
end
print arr
print "\n"

