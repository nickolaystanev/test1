require "csv"
def process_file_with_csv
	result = 0
	result_ = 0
	CSV.foreach("/home/denischo1/11a/csv_example.csv") do |row|
		if row[5] == "ruby" 
			result = result + row[2].to_i
		end
		if row[5] == "python"
			result_ = result_ + row[2].to_i
		end
	end
	p result
	p result_
end
 
process_file_with_csv
