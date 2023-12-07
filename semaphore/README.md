![image](crossing.jpg)<br />
<br />
![image](fritzing.jpg)<br />
<br />
Using MARS MIPS simnulator, to access some port of the host system, use the appropriate SYSCALL from the following examples:<br />
<br />
- fopen():<br />
	li	$v0, 13<br />
	la	$a0, "/dev/ttyUSB0"	# path to the file corresponding to the serial port<br />
	li	$a1, 1			# Read: $a1=0, Write: $a1=1<br />
	li	$a2, 0<br />
	syscall<br />
	move	$t0, $v0		# Saves the file descriptor in register $t0<br />
<br />
- fwrite():<br />
	li	$v0, 15<br />
	move	$a0, $t0	# file descriptor is in register $t0<br />
	la	$a1, buffer	# buffer holds the string to be written<br />
	li	$a2, N		# N is the number of characters in the string<br />
	syscall<br />
<br />
- fread():<br />
  	li	$v0, 14<br />
	move	$a0, $t0	# file descriptor is in register $t0<br />
	li	$a1, buffer	# input buffer address in data segment (e.g.: buffer .space 100)<br />
	syscall<br />
<br />
- fclose():<br />
	li	$v0, 16<br />
	move	$a0, $t0	# file descriptor is in register $t0<br />
	syscall<br />
<br />
- delay():<br />
	li	$v0, 32<br />
	li	$a0, 2000	# pause 2000 ms (2 seconds)<br />
	syscall<br />
 <br />

