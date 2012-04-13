



compileNlink:
	gcc -Wall Serial.c

compileWNillflags:
	gcc Serial.c
compile:
	gcc -Wall -c Serial.c

link:
	gcc Serial.o -o Serial


clean:
	rm -rf a.out Serial.o