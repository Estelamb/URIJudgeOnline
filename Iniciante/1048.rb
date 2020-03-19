salario = gets.to_f

if salario>0 && salario<=400
  novo = salario*0.15
  salario = salario+novo
  puts "Novo salario: %.2f" %salario
  puts "Reajuste ganho: %.2f" %novo
  puts "Em percentual: 15 %"

elsif salario>400 && salario<=800
  novo = salario*0.12
  salario = salario+novo
  puts "Novo salario: %.2f" %salario
  puts "Reajuste ganho: %.2f" %novo
  puts "Em percentual: 12 %"

elsif salario>800 && salario<=1200
  novo = salario*0.10
  salario = salario+novo
  puts "Novo salario: %.2f" %salario
  puts "Reajuste ganho: %.2f" %novo
  puts "Em percentual: 10 %"

elsif salario>1200 && salario<=2000
  novo = salario*0.07
  salario = salario+novo
  puts "Novo salario: %.2f" %salario
  puts "Reajuste ganho: %.2f" %novo
  puts "Em percentual: 7 %"

else
  novo = salario*0.04
  salario = salario+novo
  puts "Novo salario: %.2f" %salario
  puts "Reajuste ganho: %.2f" %novo
  puts "Em percentual: 4 %"
end
