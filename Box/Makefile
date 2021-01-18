PROJECT_NAME = Box
SRC = box.cpp box_test.cpp 


${PROJECT_NAME}.exe : ${SRC}
	g++ $^  -lgtest_main -lgtest -o $@

run: ${PROJECT_NAME}.exe
	./$^.exe

clean:
	rm ${PROJECT_NAME}.exe