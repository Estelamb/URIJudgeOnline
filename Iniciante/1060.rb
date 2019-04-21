positivo =0

for i in 1..6
  x = gets.to_f
  if x>0
    positivo+=1
  end
end

puts "#{positivo} valores positivos"
