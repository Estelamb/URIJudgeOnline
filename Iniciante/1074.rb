n = gets.to_i
i = 0

while i<n
  x = gets.to_i
  puts "ODD NEGATIVE" if x<0 && x%2!=0
  puts "EVEN NEGATIVE" if x<0 && x%2==0
  puts "NULL" if x==0
  puts "ODD POSITIVE" if x>0 && x%2!=0
  puts "EVEN POSITIVE" if x>0 && x%2==0
  i+=1
end
