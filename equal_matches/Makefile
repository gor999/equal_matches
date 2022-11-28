all:compile


create_directories:
	mkdir -p bin/

compile:create_directories
	g++ src/main.cpp -I./inc/ -o bin/main && ./bin/main


remove:
	rm -rf bin