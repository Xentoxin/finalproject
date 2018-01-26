
all: hospital_management_system
	gcc -o hospital hospital_management_system.c

run: hospital
	./hospital
