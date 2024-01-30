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
	${MAKE} -C Planck-area
	${MAKE} -C Planck-density
	${MAKE} -C Planck-electric-charge
	${MAKE} -C Planck-electric-current
	${MAKE} -C Planck-energy
	${MAKE} -C Planck-force
	${MAKE} -C Planck-impedance
	${MAKE} -C Planck-length
	${MAKE} -C Planck-mass
	${MAKE} -C Planck-momentum
	${MAKE} -C Planck-power
	${MAKE} -C Planck-pressure
	${MAKE} -C Planck-temperature
	${MAKE} -C Planck-time
	${MAKE} -C Planck-voltage
	${MAKE} -C Planck-volume
