n = gets.to_i
i = 1

while i<=n
  quadrado = i*i
  puts "%d^2 = #{quadrado}" %i if i%2==0
  i+=1
end
