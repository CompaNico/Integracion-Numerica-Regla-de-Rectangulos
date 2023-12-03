
bin/IntegracionNumerica: src/IntegracionNumerica.cpp include/*
	c++ src/IntegracionNumerica.cpp -o bin/IntegracionNumerica -I include -lncurses

run : bin/IntegracionNumerica
	./bin/IntegracionNumerica