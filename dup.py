print("Removing duplicates...")
lines_seen = set() # holds lines already seen
with open("pass_file", "a") as output_file:
	for each_line in open("user:pass", "r"):
	    if each_line not in lines_seen: 
	        output_file.write(each_line)
	        lines_seen.add(each_line)
print("Duplicates removed!")
