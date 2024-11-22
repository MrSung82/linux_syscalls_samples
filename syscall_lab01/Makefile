
# Makefile for syscall_lab01 project
bin_dir=./bin/Debug
obj_dir=./obj/Debug

$(bin_dir)/sample__dladdr: $(obj_dir)/main.o $(obj_dir)/sample__dladdr.o $(bin_dir)/libworld.so
	g++ -o $(bin_dir)/sample__dladdr $(obj_dir)/main.o $(obj_dir)/sample__dladdr.o -L$(bin_dir)/ -lworld -Wl,-rpath,.

$(bin_dir)/libworld.so:
	cp libworld.a  $(bin_dir)/
	cp libworld.so  $(bin_dir)/

$(obj_dir)/main.o: main.cpp
	g++ -o $(obj_dir)/main.o -c main.cpp

$(obj_dir)/sample__dladdr.o: sample__dladdr.cpp
	g++ -o $(obj_dir)/sample__dladdr.o -c sample__dladdr.cpp


clean:
	rm -f $(obj_dir)/*
	rm -f $(bin_dir)/*
