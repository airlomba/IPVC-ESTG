# IPVC-ESTG-AESDC
Simple stuff for my classes. The point of these simple projects is to motivate the students to work on the MIPS architecture, using the MARS MIPS simulator (http://courses.missouristate.edu/KenVollmar/MARS/), and getting some results beyond the simulator itself.<br />
In fact, through the use of some SYSCALLs, the simulator can interact with IOs of the simulator host. Thus, some hardware was developed to allow the students to interact with real world mockups; namely:<br />
- A couple of semaphores at a crossing between a Street and an Avenue;
- An elevator system (under development).

This repository provides the schematics and the firmware for each mockup. For the sake of simplicity and cost, all mockups are based on Arduino Nano architecture. These mockups can however, be used with any simulator or architecture that features serial communication.
