#!/usr/bin/env ruby

class StdClass
	def initialize
		$stdout.print("Type something in: ")
		userinp = gets
		$stdout.print(userinp)
	end
end

x = StdClass.new
