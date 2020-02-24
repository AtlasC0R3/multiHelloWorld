#!/usr/bin/env ruby
class StdClass
	def initialize
		$stdout.print("Hello, world!\n")
	end
end

x = StdClass.new
