CXXFLAGS  = -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
#CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17
CXXFLAGS += -Werror
CXXFLAGS += --all-warnings
CXXFLAGS += --extra-warnings
CXXFLAGS += -Wconversion
CXXFLAGS += -Wconversion-null
CXXFLAGS += -Wdiv-by-zero
CXXFLAGS += -Wfloat-conversion
CXXFLAGS += -Wfloat-equal
CXXFLAGS += -fext-numeric-literals

export CXXFLAGS

all:
	${MAKE} -C Planck-angular-frequency
