LongestConsecutiveSequence: LongestConsecutiveSequence.o
	g++ -g -o LongestConsecutiveSequence.exe LongestConsecutiveSequence.o -pthread    

LongestConsecutiveSequence.o: LongestConsecutiveSequence/LongestConsecutiveSequence.cpp
	g++ -g  -c -pthread LongestConsecutiveSequence/LongestConsecutiveSequence.cpp
