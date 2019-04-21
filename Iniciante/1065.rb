par = 0

for i in 1..5
  x = gets.to_i
  if x%2==0
    par+=1
  end
end

puts "#{par} valores pares"
