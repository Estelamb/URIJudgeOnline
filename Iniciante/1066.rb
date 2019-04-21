par = 0
impar = 0
positivo = 0
negativo = 0

for i in 1..5
  x = gets.to_i
  if x>0
    positivo+=1

  elsif x<0
    negativo+=1
  end

  if x%2==0
      par+=1

  else
    impar+=1
  end
end

puts "#{par} valor(es) par(es)"
puts "#{impar} valor(es) impar(es)"
puts "#{positivo} valor(es) positivo(s)"
puts "#{negativo} valor(es) negativo(s)"
