#include <jni.h>
#include "Main.h"
#include <stdio.h>

JNIEXPORT jint JNICALL Java_Main_intMethod(JNIEnv *env, jobject obj, jint i) {
    int j = 0;

    int result = 0;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            result += i*j;
        }
    }
    
    return result;
}

JNIEXPORT void JNICALL Java_Main_hello(JNIEnv *env, jobject obj) {
    printf("Hello world!\n");
    
    return;
}
