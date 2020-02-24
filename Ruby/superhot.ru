#!/usr/bin/env ruby

class StdClass
	def initialize
	loop do
	  $stdout.print("SUPER\n")
	  	  sleep(1.0)
	  $stdout.print("HOT\n")
	      sleep(1.0)
	  end
	end
end

x = StdClass.new

