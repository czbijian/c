object=main.o a.o b.o
edit:$(object)
	gcc -o edit $(object)
main.o:a.h b.h
a.o:a.h
b.o:b.h
.PHONY:clean
clean:
	rm edit main.o a.o b.o
