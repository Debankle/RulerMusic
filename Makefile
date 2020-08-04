all:
	cd build; cmake ..; make

prep:
	mkdir build; cd build; cmake ..

comp:
	cd build; make

run:
	./build/bin/RulerMusic

clean:
	rm -rf build/*