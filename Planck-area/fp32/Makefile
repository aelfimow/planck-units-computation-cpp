all:
	${CXX} -c Speed_of_light.cpp -o Speed_of_light.o ${CXXFLAGS}
	${CXX} -c Gravitational_constant.cpp -o Gravitational_constant.o ${CXXFLAGS}
	${CXX} -c Reduced_Planck_constant.cpp -o Reduced_Planck_constant.o ${CXXFLAGS}
	${CXX} -c main.cpp -o main.o ${CXXFLAGS}
	${CXX} Speed_of_light.o Gravitational_constant.o Reduced_Planck_constant.o main.o -o main.exe
