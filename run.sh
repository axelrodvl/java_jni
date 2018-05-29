javac Main.java                                                                                                
javah -jni Main
gcc -shared -fpic -o libMain.dylib -I${JAVA_HOME}/include \
  -I${JAVA_HOME}/include/darwin Main.c
export LD_LIBRARY_PATH=.
java -Djava.library.path=. Main
