
all:
	$(CXX) hello-opencv.cpp -o hello-opencv '-Wl,-rpath,$$ORIGIN/lib' -I./include -L./lib -lopencv_core 

clean:
	rm hello-opencv
