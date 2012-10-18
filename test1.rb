require "csv"
def process_file_with_csv
	$n = Hash.new(0)
	$x = Hash.new(0)

	i = 0
	ARGV.each do|a|
		puts "$y: #{a}"
	end

	CSV.foreach("example.csv") do |row|
		i = row[0].to_f
		a=0
		$x[a] = row[1].to_f
		y = (i+$n[0])/$x[a]
		a= a+1
		p y
	end

	print $arg

	CSV.open("export.csv", "w") do |row|
		while i < 4
			row << [ i.to_s , $x[i].to_s, y[i].to_s ]
			i = i+ 1
		end
	end

end

process_file_with_csv
