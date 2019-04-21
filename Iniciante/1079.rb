n = gets.to_i

for i in 1...n+1
  x, y, z = gets.split.map(&:to_f)

  media = ((x*2) + (y*3) + (z*5))/10
  puts "#{media.round 1}"
end
