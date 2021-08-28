
approx: approx.cpp main.cpp
	g++ -c approx.cpp main.cpp
	
approx-pi: main.o approx.o
	g++ approx.o main.o -o approx-pi.exe
	
test:
	./approx-pi.exe < lab1-test.in> lab1-mine.out
	
clean:
	rm -rf code *.o