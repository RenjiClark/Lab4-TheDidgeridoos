#!/usr/bin/ruby

require 'find'

dirCount = 0
fileCount = 0

Find.find(ARGV[0]) do |path|
  if FileTest.directory?(path)
    dirCount = dirCount + 1
  else
    fileCount = fileCount + 1
  end 
end

puts "Processed all the files from <#{ARGV[0]}>."
puts "There were #{dirCount} directories."
puts "There were #{fileCount} regular files."
