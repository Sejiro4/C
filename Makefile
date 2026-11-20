Hello.exe: Hello.c
	gcc Hello.c -o Hello.exe

clean:
	rm -f Hello.exe