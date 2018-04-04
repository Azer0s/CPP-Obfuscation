all:
	@g++ -std=c++17  main.cpp -o bin/output
	@${MAKE} run

run:
	@./bin/output
