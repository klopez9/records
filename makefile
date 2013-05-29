
#specify the compiler
GXX=g++ -g

# Specifiy the target
all: linkedList.exe

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
linkedList.exe: StudentRecord.o EmployeeRecord.o AlumniRecord.o ListMain.o
	$(GXX) StudentRecord.o EmployeeRecord.o AlumniRecord.o ListMain.o -o linkedList.exe

# Specify how the object files should be created from source files

ListMain.o: ListMain.cpp LinkedList.cc LinkedList.h Node.cc Node.h
	$(GXX)  -c  ListMain.cpp

StudentRecord.o: StudentRecord.cpp
	$(GXX)  -c  StudentRecord.cpp

EmployeeRecord.o: EmployeeRecord.cpp
	$(GXX)  -c  EmployeeRecord.cpp

AlumniRecord.o: AlumniRecord.cpp
	$(GXX)  -c  AlumniRecord.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o *~ core linkedList.exe