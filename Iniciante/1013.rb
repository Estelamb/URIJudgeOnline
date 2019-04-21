a, b, c = gets.split.map(&:to_f)

maiorab = (a + b + ((a-b).abs))/2
maior = (maiorab + c + ((maiorab-c).abs))/2

puts "%d eh o maior" %maior
