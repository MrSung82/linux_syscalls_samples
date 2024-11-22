# Makefile for World project

binary: main.o libworld.so
	g++ -o binary main.o -L. -lworld -Wl,-rpath,.

main.o: main.cpp
	g++ -c main.cpp

libworld.so: h_world.o g_world.o
	g++ -shared -o libworld.so h_world.o g_world.o

h_world.o: h_world.cpp
	g++ -c -fPIC h_world.cpp

g_world.o: g_world.cpp
	g++ -c -fPIC g_world.cpp

clean:
	rm -f *.o *.so binary
