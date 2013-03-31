def recursive_sum(current, input, target, index, sum)
    (index...input.length).each do |i|
    	recursive_sum(current + [input[i]], input, target, i+1, sum + input[i])
    end
    puts "#{current.join(' + ')} = #{sum}" if sum == target
end    
