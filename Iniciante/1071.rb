x = gets.to_i
y = gets.to_i
soma = 0

if y>0
  for i in y...x
    if i%2!=0
      soma+=i
    end
  end

elsif y<0
  while x>y
    if x%2!=0
      soma+=x
    end
    x-=1
  end
end


puts soma
