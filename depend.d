#! cat build/*.d > depend.d
build/LAB1.exe: src/LAB1.c include/algorithm_Node.h

include/algorithm_Node.h:
build/LAB2A.exe: src/LAB2A.c
build/LAB2B.exe: src/LAB2B.c
build/LAB2C.exe: src/LAB2C.c
build/LAB3A.exe: src/LAB3A.c
build/LAB3B.exe: src/LAB3B.c
build/LAB3C.exe: src/LAB3C.c
build/LAB4.exe: src/LAB4.c
build/LAB5.exe: src/LAB5.c
build/LAB6.exe: src/LAB6.c
build/LAB7A.exe: src/LAB7A.c include/lab3h.h

include/lab3h.h:
build/LAB8A.exe: src/LAB8A.c include/lab5h.h

include/lab5h.h:
build/LAB9A.exe: src/LAB9A.c include/lab6h.h

include/lab6h.h:
build/LABW1.exe: src/LABW1.c include/lab3h.h

include/lab3h.h:
build/LABW2.exe: src/LABW2.c include/lab7h1.h

include/lab7h1.h:
build/LABW3.exe: src/LABW3.c include/lab8.h

include/lab8.h:
