positivo =0
soma = 0

for i in 1..6
  x = gets.to_f
  if x>0
    positivo+=1
    soma+=x
  end
end

puts "#{positivo} valores positivos"
media = soma/positivo
puts "%.1f" %media
