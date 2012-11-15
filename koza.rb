require 'open-uri'
require 'uri'
class Pages
	content = 0
	url = 0
	links = 0

     def method(link)
	puts link
	file = open(link)
	contents = file.read
	puts contents
	contents = contents.split('<')
		for i in 0..contents.length
			if(contents[i].include? 'a href')
				puts '<' + contents[i]
			end
		end
     end
end

petel = Pages.new
petel.method(gets)
